// Да се провери дали едно цяло число е съвършено.Едно число е съвършено, когато е равно на сбора 
// от делителите си(без самото число). 6 е съвършено - делители 1, 2 и 3.
// Примерен изход при вход 6: Perfect!
// Примерен изход при вход 5 Not perfect!
// Примерен изход при вход 28 : Perfect!

#include <iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;

    int sumDigits = 0;
    int tempNumber = number;
    
    
    int i = 1;
    while (tempNumber > i)
    {
        
        if (tempNumber % i == 0 && number != i)
        {
            sumDigits += i;
        }

        i++;
    }

    if (sumDigits == number)
    {
        cout << "Perfect!";
    }
    else
    {
        cout << "Not perfect!";
    }


    return 0;
}
