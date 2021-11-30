#include <iostream>
#include <cstdlib>
#include<cstring>

using namespace std;

char toupper(char a)
{
    if (a >= 'a' && a <= 'z')
    {
       return a - 32;
    }

}


void changeLetters(char str[])
{

    unsigned len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]=toupper(str[i]);
        }
    }


    for (int i = 0; i < len; i++)
    {
        switch (str[i])
        {
        case ' ':
            str[i]='_';
            break;
        case 'A':
            str[i]='4';
            break;
        case 'E':
            str[i]='3';
            break;
        case 'O':
            str[i]='0';
            break;
        case 'I':
            str[i]='1';
            break;
        default:
            break;
        }
    }


}




int main()
{
char str[32];

cin.getline(str,32);

changeLetters(str);
cout << str;







return 0;
}
