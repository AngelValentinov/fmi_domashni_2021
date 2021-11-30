#include<iostream>
#include<cstring>
using namespace std;
const unsigned maxSize = 32;

bool isSubset(const char stringOne[], const char stringTwo[])
{
    bool flag = true;

    if(strlen(stringTwo) > strlen(stringOne))
    {
        flag = false;
    }
    else
    {

        int i = 0 , j = 0;
        while (stringTwo[j] != '\0')
        {
            // Check until you find a matching letter
            while (stringOne[i] != stringTwo[j])
            {

                // If you have found a matching letter but there aren't enough letters
                if(strlen(stringOne) - i + 1 < strlen(stringTwo))
               {
                    flag = false;
                    return flag;
                }
                i++;
            };

            // If the letters are matching go to the next letter
            if(stringOne[i] == stringTwo[j])
            {
                i++;
                j++;
            }
            // If the letter is not matching and you have moved from the first letter go back
            if(stringOne[i] != stringTwo[j] && j != 0)
            {
                j = 0;
            }
        };
    }


    return flag;
}



int main()
{
    char stringOne[maxSize];
    char stringTwo[maxSize];
    cin >> stringOne;
    cin.ignore();
    cin >> stringTwo;

    isSubset(stringOne,stringTwo)? cout << "Yes" : cout << "No";

    return 0;
}
