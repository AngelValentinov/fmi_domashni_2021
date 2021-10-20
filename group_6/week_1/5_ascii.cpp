#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

char c;
cin >> c;

if (c >= 'a' && c <= 'z')
{
    cout << "The upper case character corresponding to is: "<< (char)(c - 32);
}
else if (c >= 'A' && c <= 'Z')
{
    cout << "The lower case character corresponding to is: "<< char(c + 32);
}
else
{
    cout << "It is not a letter.";
}


return 0;
}
