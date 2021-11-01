#include <iostream>
#include <cstdlib>
using namespace std;








int main()
{





unsigned int number;
cin >> number;

int digitCounter = 0;
bool isBiggerThanLeft = true;


while(number && isBiggerThanLeft)
{

int currentDigit = number % 10;
number /= 10;

if(digitCounter % 2 == 0)
{
    if(currentDigit <= number % 10)
    {
        isBiggerThanLeft = false;
        break;
    }
}

digitCounter++;

}

if (!isBiggerThanLeft)
{
    cout << "No";
}
if (isBiggerThanLeft)
{
    cout << "Yes";
}


return 0;
}
