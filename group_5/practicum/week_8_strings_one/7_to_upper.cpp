#include<iostream>
using namespace std;

const unsigned maxSize = 32;

unsigned strlen(const char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    };
    return i;
}

void toUpper(char str[])
{
    unsigned len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}


int main()
{

    char str[maxSize];
    cin >> str;

    toUpper(str);
    cout << str;
    return 0;
}
