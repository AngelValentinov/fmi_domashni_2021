#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

unsigned year;
cin >> year;


if (year % 4 != 0)
{
    cout << "Common year.";
}
else if (year % 100 != 0)
{
    cout << "Leap year.";
}
else if (year % 400 == 0)
{
    cout <<"Common year.";
}
else
{
    cout << "Leap year.";
}



return 0;
}
