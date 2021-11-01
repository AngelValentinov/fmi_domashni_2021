#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{


int number;
cin >> number;
int firstDigit = number / 1000;
bool isOdd = firstDigit % 2 != 0;
bool isBiggest = true;

cout << firstDigit;
for (int i = 0; i < 3; i++)
{
    int digitToCheck = number % 10;
    number/=10;

    if (firstDigit <= digitToCheck)
    {
        isBiggest = false;
    }
}

if (!isBiggest)
{
    cout << "No.";
}
if (isBiggest)
{
    cout << "Yes.";
}









return 0;
}
