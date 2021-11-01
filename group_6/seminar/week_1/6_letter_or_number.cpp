#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

char c;
cout << "Enter a symbol: ";
cin >> c;

/* Ne znam kak se preobrajuva ot symbol letter Upper case -> lower case bez tazi magiq*/
if (c >= 'a' && c <='z')
{
   cout <<  char(c -= 32);
}

else if(c >= 'A' && c <= 'Z')
{
    cout << (char)(c+=32);
}
else if(c >= '0' && c <= '9')
{
    int i = (c - '0');
    i *= i;
    cout << i;
}






return 0;
}
