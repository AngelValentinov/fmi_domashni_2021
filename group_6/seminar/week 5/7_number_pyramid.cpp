#include <iostream>
using namespace std;

int main()
{
	int number;

	do
	{
		cin >> number;

	} while (number > 99 || number < 1);


	for (size_t i = 1; i <= number; i++)
	{
		// A cycle to print the spaces before the numbers
		for (size_t j = 1; j < i; j++)
		{
			cout << " ";
			// If the number is bigger than 9 then add an additional space
			if (j > 9)
			{
				cout << " ";
			}
		}
		// A cycle to print out the numbers
		for (size_t j = i; j <= number; j++)
		{
			cout << j;
		}
		cout << endl;
	}

	for (size_t i = 2; i <= number; i++)
	{
		// spaces = numberS - fewNumbers
		for (size_t j = 0; j < number - i; j++)
		{
			cout << " ";
		}

		for (size_t j = number - i + 1; j <= number; j++)
		{
			cout << j;
		}
		cout << endl;
	}


	return 0;
}