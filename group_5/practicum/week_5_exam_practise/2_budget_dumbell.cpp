#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	for (size_t i = 0; i < number; i++)
	{

		// Cycle to make the upper most and bottom rows
		if (i == 0 || i == number - 1)
		{
			for (size_t j = 0; j < number; j++)
			{
				cout << ". ";
			}
			for (size_t j = 0; j < number; j++)
			{
				cout << " ";
			}
			for (size_t j = 0; j < number; j++)
			{
				cout << ". ";
			}
		}
		// for the other rows
		else
		{
			cout << ".";
			
			for (size_t i = 0; i < number; i++)
			{
				cout << " ";
			}
			// If the number is even do additional space
			if (number % 2 == 0)
			{
				cout << " ";
			}
			cout << ". ";
			// Do the inbetween + the left wall of the second
			for (size_t i = 0; i <= number / 2; i++)
			{
				cout << ". ";
			}

			for (size_t i = 0; i < number; i++)
			{
				cout << " ";
			}
			cout << ". ";

		}

		cout << endl;
		cout << endl;

	}

	return 0;
}
