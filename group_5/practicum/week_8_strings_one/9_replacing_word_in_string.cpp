#include<iostream>
#include<cstring>
using namespace std;

const unsigned maxSize = 128;

bool isLetter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return true;
	}
	return false;
}
bool isSymbol(char c)
{
	if (!((c >= '1' && c <= '9') || (isLetter(c))))
	{
		return true;
	}
	return false;
}


void replaceWordInText(const char text[], const char wordToReplace[], const char replacingWord[], char output[])
{
	char currentWord[maxSize];
	unsigned wordsCounter = 0;
	unsigned j = 0;
	unsigned i = 0;
	unsigned len = strlen(text);

	while (j < len)
	{

		//When the symbol is a letter remember the word
		while (text[j] != ' ' && text[j] != '.' && text[j] != '!' && j < len)
		{
			currentWord[i] = text[j];
			i++;
			j++;
		}
		currentWord[i] = '\0';


		if (strcmp(currentWord, wordToReplace) == 0)
		{
			//If it is the first word just copy it.
			if (wordsCounter == 0)
			{
				strcpy(output, replacingWord);
				wordsCounter++;
			}
			else
			{
				strcat(output, replacingWord);
				wordsCounter++;
			}
		}
		else
		{
			if (wordsCounter == 0)
			{
				strcpy(output, currentWord);
				wordsCounter++;
			}
			else
			{
				strcat(output, currentWord);
				wordsCounter++;
			}

		}
		i = 0;

		// If the symbol is NOT a letter => Copy the symbol and move forward
		while (isSymbol(text[j]))
		{
			currentWord[i] = text[j];
			currentWord[++i] = '\0';
			strcat(output, currentWord);
			j++;
			// If in some point the counter goes to the end of the text break the cycle
			if (j >= len)
			{
				break;
			}
			i = 0;
		}
	}

	cout << output;
}

int main()
{
	char output[maxSize];
	char stringText[maxSize];
	cout << "Text: ";
	cin.getline(stringText, maxSize);

	char wordOne[maxSize];
	// cout << "Word to replace: ";
	cin >> wordOne;


	char wordTwo[maxSize];
	// cout << "Replacing word: ";
	cin >> wordTwo;


	replaceWordInText(stringText, wordOne, wordTwo, output);

	return 0;
}
