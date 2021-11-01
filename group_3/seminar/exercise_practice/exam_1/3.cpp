#include <iostream>
using namespace std;

int main()
{

int n,k;
cin >> n >> k;

if (n > k)
{
    cout << "No solution.";
    return 1;
}

int sumDividers = 0;
int currentNumber = n + 1;
while (sumDividers != k)
{
    int divider = 1;
        while (currentNumber/2 >= divider)
        {
            if (currentNumber % divider == 0)
            {
                sumDividers+=divider;
            }
            divider++;
        }

    if (sumDividers == k)
    {
        cout << currentNumber;
        break;
    }
    sumDividers = 0;
    currentNumber++;
}

return 0;
}
