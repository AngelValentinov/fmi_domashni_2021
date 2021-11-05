#include <iostream>
using namespace std;
int main()
{

	int number;
	cin >> number;


	for (size_t i = 1; i <= number; i++)
	{
		//Print left numbers
		for (size_t j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		// Distance prints two spaces
		for (size_t j = 0; j < (number - i); j++)
		{
			cout << "  ";
		}

		// The "central" spaces
		for (size_t j = 0; j < number; j++)
		{
			if (i != number) {

				cout << " ";
			}
			else
			{
				cout << "-";
			}
		}


		cout << " ";
		for (size_t j = 0; j < number -i; j++)
		{
			cout << "  ";
		}
		//Print right numbers
		for (size_t j = i; j > 0; j--)
		{
			cout << j << " ";
		}


		cout << endl;

	}

	for (size_t i = 1; i < number; i++)
	{
		for (size_t j = 1; j <= number - i; j++)
		{
			cout << j << " ";
			
		}

		//spaces to the middle
		for (size_t j = 0; j < i; j++)
		{
			cout << "  ";
		}
		// spaces in the middle
		for (size_t j = 0; j < number; j++)
		{
			cout << " ";
		}
		cout << " ";

		//spaces right side
		for (size_t j = 0; j < i; j++)
		{
			cout << "  ";
		}

		for (size_t j = number - i; j > 0; j--)
		{
			cout << j << " ";
		}


		cout << endl;

	}



}
