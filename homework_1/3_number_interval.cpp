#include <iostream>
using namespace std;

int main()
{
	int number, n, m;

	do
	{
		cout << "Please enter a number between 100 and 999: ";
		cin >> number;
	} while (number < 100 || number > 999);

	int firstDigit = number / 100;
	int secondDigit = (number / 10) % 10;
	int thirdDigit = number % 10;

	n = firstDigit + secondDigit;
	m = firstDigit + thirdDigit;


	for (size_t i = 0; i < n; i++)
	{

		for (size_t j = 0; j < m; j++)
		{
			// What if the number is divisible by 5 and 3 ? 
			if (number % 5 == 0)
			{
				number -= firstDigit;
			}
			else if (number % 3 == 0)
			{
				number -= secondDigit;
			}
			else
			{
				number += thirdDigit;
			}
			cout << number << " ";
		}

		cout << endl;
	}

	return 0;
}