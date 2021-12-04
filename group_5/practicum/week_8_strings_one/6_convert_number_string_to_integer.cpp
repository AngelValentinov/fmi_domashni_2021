#include <iostream>
using namespace std;
unsigned int StrLen(const char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void leaveNumbers(const char str[], char strNumber[])
{

    unsigned length = StrLen(str);
    int j = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i]>= '0' && str[i] <= '9')
        {
            strNumber[j] = str[i];
            j++;
        }
    }

    strNumber[j] = '\0';
}

void fillNumberArray(int numberString[], const char str[])
{
    unsigned len = StrLen(str);
    for (int i = 0; i < len; i++)
    {
        numberString[i] = (str[i] - '0');
    }
}

unsigned arrayNumbersToNumber(int numberArray[], unsigned sizeArray)
{
    unsigned numberToReturn = numberArray[0];
    for (int i = 1; i < sizeArray ; i++)
    {
        numberToReturn = numberToReturn * 10 + numberArray[i];
    }

    return numberToReturn;
}
void printArray(int number[], int arraySize)
{

    for (int i = 0; i < arraySize; i++)
    {
        cout << number[i] << " ";
    }
}

int main()
{

    const int maxSize = 64;

    char str[maxSize];
    char numberString[maxSize];
    cin >> str;
    // Function to remove the symbols besides the numbers
    leaveNumbers(str, numberString);

    int numbers[maxSize];
    // Converts the string with numbers to an integer array
    fillNumberArray(numbers,numberString);

    //Finally the number array is converted to an integer
    cout << arrayNumbersToNumber(numbers,StrLen(numberString));


    return 0;
}

