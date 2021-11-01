#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
double number_first, number_second;
char symbol;
cout << "Enter first number: ";
cin >> number_first;
cout << "Enter second number: ";
cin >> number_second;
cout << "Enter the symbol: ";
cin >> symbol;

switch (symbol)
{
case '+':
    cout << number_first + number_second;
    break;
case '-':
    cout << number_first - number_second;
    break;
case '*':
    cout << number_first * number_second;
    break;
case '/':
    cout << number_first / number_second;
    break;
default:
    cout << "Invalid symbol.";
}



return 0;
}
