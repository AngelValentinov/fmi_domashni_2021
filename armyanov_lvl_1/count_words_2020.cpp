#include <iostream>
#include<cstring>
using namespace std;
struct wordPool
{
	char word[65];
	int repetitions;
};
void cutText(char*& text)
{
	int len = strlen(text);
	for (size_t i = 0; i < len; i++)
	{
		if (text[i] == '#')
		{
			text[i] = '\0';
			return;
		}
	}
}
void makeAllLowerCase(char*& text)
{
	int len = strlen(text);
	for (size_t i = 0; i < len; i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			text[i] += 32;
		}
	}
}
bool isWord(char symbol)
{
	if (!(symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z' || symbol == '-'))
	{
		return false;
	}
	return true;
}
bool isMatchingDictionary(const char* temporaryWord, wordPool Word)
{
	if (strcmp(temporaryWord, Word.word) == 0)
	{
		return true;
	}
	return false;
}
int numberOfMatches(const char* temporaryWord, const char* text, int startingIndex)
{
	int len = strlen(text);
	char currentWord[65];
	int j = 0;
	int i = startingIndex;
	int numberOfMatches = 0;
	while (i < len && text[i] != '\0')
	{
		while (isWord(text[i]))
		{
			currentWord[j++] = text[i];
			++i;
		}
		currentWord[j] = '\0';
		if (strcmp(temporaryWord, currentWord) == 0)
		{
			++numberOfMatches;
		}
		j = 0;
		++i;
	}
	return numberOfMatches;
}
void saveWordsToStruct(const char* text, wordPool* UniqueWords, int& uniqueWordsCounter)
{
	int i = 0;
	int len = strlen(text);
	while (i < len)
	{
		while (!isWord(text[i]))
		{
			++i;
			if (i > len)
			{
				return;
			}
		}
		char temporaryWord[65];
		int j = 0;
		while (isWord(text[i]))
		{
			temporaryWord[j++] = text[i];
			++i;
		}
		temporaryWord[j] = '\0';
		j = 0;
		// We have to see if the temporary word exist in our wordPool pool 
		for (size_t k = 0; k <= uniqueWordsCounter; k++)
		{
			if (isMatchingDictionary(temporaryWord, UniqueWords[k]))
			{
				break;
			}
			if (!(isMatchingDictionary(temporaryWord, UniqueWords[k])) && (k == uniqueWordsCounter))
			{
				strcpy_s(UniqueWords[uniqueWordsCounter].word, temporaryWord);
				UniqueWords[uniqueWordsCounter].repetitions = numberOfMatches(temporaryWord, text, i) + 1;
				++uniqueWordsCounter;
				break;
			}
		}
	}
}
unsigned allWordsCounter(const char* text)
{
	int wordsCounter = 1;
	int i = 0;
	while (text[i] != '\0')
	{
		if (text[i] == ' ')
		{
			++wordsCounter;
		}
		++i;
	}
	return wordsCounter;
}
void printResult(wordPool* UniqueWords, unsigned diffWords, int allWords)
{
	cout << "All words - " << allWords << endl;
	cout << "Distinct words - " << diffWords << endl;
	for (size_t i = 0; i < diffWords; i++)
	{
		cout << UniqueWords[i].word << " - " << UniqueWords[i].repetitions << endl;
	}
}
int maxElemIndex(wordPool* UniqueWords, int diffWords, int index)
{
	int maxIndex = index;
	for (size_t i = index; i < diffWords; i++)
	{
		if (UniqueWords[maxIndex].repetitions < UniqueWords[i].repetitions)
		{
			maxIndex = i;
		}
	}
	return maxIndex;
}
void insertSort(wordPool* UniqueWords, int diffWords, int startIndex, int indexMax)
{
	int i = indexMax;
	int num = UniqueWords[indexMax].repetitions;
	char text[65];
	strcpy_s(text, UniqueWords[indexMax].word);
	//From index to the beggining
	while (i > startIndex)
	{
		UniqueWords[i].repetitions = UniqueWords[i - 1].repetitions;
		strcpy_s(UniqueWords[i].word, UniqueWords[i - 1].word);
		--i;
	}
	strcpy_s(UniqueWords[startIndex].word, text);
	UniqueWords[startIndex].repetitions = num;
}
void insertAt(wordPool* UniqueWords, int diffWords)
{
	int tempNumber = UniqueWords[0].repetitions;
	char text[65];
	int i = diffWords;
	for (size_t i = 0; i < diffWords; i++)
	{
		insertSort(UniqueWords, diffWords, i, maxElemIndex(UniqueWords, diffWords, i));
	}
	for (size_t i = 1; i < diffWords; i++)
	{
		if (UniqueWords[i - 1].repetitions == UniqueWords[i].repetitions)
		{
			//Find the biggest lexigraphical word
			int j = i;
			strcpy_s(text, UniqueWords[i - 1].word);
			for (j = i; j < diffWords && (UniqueWords[i - 1].repetitions == UniqueWords[j].repetitions); j++)
			{
				if (strcmp(text, UniqueWords[j].word) > 0)
				{
					char tempString[65];
					strcpy_s(tempString, text);
					int len = strlen(UniqueWords[j].word);
					strcpy_s(text, UniqueWords[j].word);
					text[len] = '\0';
					strcpy_s(UniqueWords[j].word, tempString);
				}
			}
			strcpy_s(UniqueWords[i - 1].word, text);
		}
	}
}
int main()
{
	char* text = new char[1025];
	cin.getline(text, 1024);
	cutText(text);
	makeAllLowerCase(text);
	wordPool UniqueWords[1025];
	int diffWords = 0;
	saveWordsToStruct(text, UniqueWords, diffWords);
	insertAt(UniqueWords, diffWords);
	printResult(UniqueWords, diffWords, allWordsCounter(text));
	delete[] text;
	return 0;
}