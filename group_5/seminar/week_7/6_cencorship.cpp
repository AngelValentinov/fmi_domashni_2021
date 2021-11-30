#include<iostream>
using namespace std;
const int maxSize = 33;

unsigned strlen(const char str[])
{
    unsigned count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
        count++;
    };

    return count;
}

unsigned countSymbol(const char str[], char symbol)
{
    unsigned count = 0;
    unsigned len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        // Checks if the letter Upper and Lower case matches
        if((str[i] == symbol || (str[i] - 32) == symbol) || ((str[i] + 32) == symbol))
        {
            count++;
        }
    }

    return count;
}

void replaceSymbols(char str[], char replacingSymbol, char symbol)
{
    unsigned len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if((str[i] == symbol || (str[i] - 32) == symbol) || ((str[i] + 32) == symbol))
        {
            str[i] = replacingSymbol;
        }
    }
}


int main()
{

    char str[maxSize];
    cout << "Enter the string: ";
    cin.getline(str,maxSize);

    char symbolToCheck;
    cout << "The symbol to check: ";
    cin >> symbolToCheck;

    char replacingSymbol;
    cout <<"The replacing symbol: ";
    cin >> replacingSymbol;

    cout << countSymbol(str,symbolToCheck) << " times ";
    replaceSymbols(str, replacingSymbol, symbolToCheck);

    cout << str;
    return 0;
}
