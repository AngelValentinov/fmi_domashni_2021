#include <iostream>
#include <cstdlib>
using namespace std;


unsigned strLen(const char str[])
{
    unsigned counter = 0;
    while (str[counter] != '\0')
    {
        ++counter;
    }
    return counter;
}



void filter(const char str[], char output[], int number)
{
    unsigned len = strLen(str);

    int j = 0;

    switch (number)
    {
    case 1:

        for (int i = 0; i < len; i++)
        {
            if(str[i] >= 'a' && str[i]<'z' || str[i] >= 'A' && str[i]<'Z')
            {
                output[j]=str[i];
                j++;
            }
        }
        output[j]= '\0';
        break;
    case 2:
        for (int i = 0; i < len; i++)
        {
            if(str[i] >= '0' && str[i]<'9')
            {
                output[j]=str[i];
                j++;
            }
        }
        output[j]='\0';
        break;
    case 3:
        for (int i = 0; i < len; i++)
        {
            if(!(str[i] >= '0' && str[i]<'9' || (str[i] >= 'a' && str[i]<'z' || str[i] >= 'A' && str[i]<'Z')))
            {
                output[j]=str[i];
                j++;
            }
        }
        output[j]='\0';
        break;
    default:
        cout << "Please enter a valid number.";
        break;
    }

}




int main()
{

int number;
cin >> number;


char str[33];
cin.ignore();
cin.getline(str,32);
char output[33];

filter(str,output,number);
cout << output;

return 0;
}
