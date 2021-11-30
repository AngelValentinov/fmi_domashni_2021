#include<iostream>
#include<cstring>
using namespace std;


char tolower(char c)
{
        return c + 32;
}

void convertStringToLower(char str[])
{
     unsigned len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);
        }
    }
}




void convertNames( char firstName[], char secondName[], char outputString[])
{

   convertStringToLower(firstName);
   convertStringToLower(secondName);
   unsigned lenFirst = strlen(firstName);
   unsigned length = strlen(firstName) + strlen(secondName) + 2;


    for (int i = 0, j = 0; i < lenFirst; i++)
    {
        outputString[j]=firstName[i];
        j++;
    }

    outputString[lenFirst] = '_';

    unsigned lenSecond = strlen(secondName);
    for (int i = 0,j=lenFirst+1; i <lenSecond ; i++)
    {
        outputString[j]=secondName[i];
        j++;
    }
    outputString[lenFirst + lenSecond + 1] = '\0';

}




int main()
{

    char firstName[32];
    cin >> firstName;
    cin.ignore();
    char secondName[32];
    cin>> secondName;

    char outputString[64];

     convertNames(firstName,secondName,outputString);
    cout << outputString;
    return 0;
}
