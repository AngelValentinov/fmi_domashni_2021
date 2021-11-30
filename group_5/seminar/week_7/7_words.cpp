#include<iostream>
using namespace std;

const unsigned maxSize = 32;

unsigned strlen(const char str[])
{
    unsigned i = 0;
    while (str[i] != '\0')
    {
        i++;
    };
    return i;
}

unsigned biggestWord(const char str[])
{
    unsigned biggestWord =0;
    unsigned letterCounter = 0;

    unsigned len = strlen(str);
    for (int i = 0; i <= len; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {

            if(biggestWord < letterCounter)
            {
                biggestWord = letterCounter;
            }
            letterCounter=0;
            continue;
        }
        letterCounter++;
    }

    return biggestWord;
}

unsigned smallestWord(const char str[], unsigned numberOfWords)
{
    unsigned smallest = 1;
    unsigned letterCounter = 0;
    unsigned len = strlen(str);
    if(numberOfWords != 1)
    {
        for (int i = 0; i <= len; i++)
        {
            if(str[i] == ' ' || str[i] == '!' || str[i] == '?' || str[i] == '.' || str[i] == '\0')
            {
                if(smallest > letterCounter)
                {
                    smallest = letterCounter;
                }
                letterCounter = 0;
            }
            letterCounter++;
        }
    }
    else
    {
        smallest = numberOfWords;
    }

    return smallest;

}

unsigned countWords(const char str[])
{
    unsigned counterWords = 1;
    unsigned len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            counterWords++;
        }
    }
    return counterWords;
}

int main()
{

    char str[maxSize];
    cin.getline(str,maxSize);
    cout << "Words: " << countWords(str) << endl;
    cout << "The biggest word has: " << biggestWord(str) << endl;
    cout << "The smallest word has: " << smallestWord(str, countWords(str)) << endl;
    return 0;
}
