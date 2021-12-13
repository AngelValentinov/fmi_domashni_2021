#include <iostream>
using namespace std;
const unsigned maxSize = 16;
unsigned strLen(const char* str)
{
    int i = 0;
    while ( str[i] != '\0')
    {
        i++;
    }
    return i;
}

int strCmp(const char* strOne, const char* strTwo)
{
    size_t lenOne = strLen(strOne);
    size_t lenTwo = strLen(strTwo);
    size_t biggerLen = lenOne > lenTwo ? lenOne : lenTwo;
   
    for (size_t i = 0; i < biggerLen; i++)
    {
        if (strOne[i] > strTwo[i])
        {
            return 1;
        }
        else if (strOne[i] < strTwo[i])
        {
            return -1;
        }
    }
    return 0;
}

unsigned timeTheSecondInFirst(const char* strOne, const char* strTwo)
{
    unsigned occurCounter = 0;
    unsigned lenTwo = strLen(strTwo);

    unsigned letterCounter = 0;
    //TODO: Do it with dynamic memory.
    char tempString[maxSize];
   
    int i = 0;
    while (strOne[i] != '\0')
    {
        // Remember the word
        for (size_t j = 0; j < lenTwo; ++j,++i)
        {
            tempString[j] = strOne[i];
        }
        tempString[lenTwo] = '\0';

        // If it matches words match
        if (strCmp(tempString, strTwo) == 0)
        {
            occurCounter++;
        }
     
    }
    return occurCounter;
}

int main()
{
    

    char strOne[maxSize];
    char strTwo[maxSize];

    cin >> strOne;
    cin >> strTwo;

   cout <<  timeTheSecondInFirst(strOne, strTwo);
}
