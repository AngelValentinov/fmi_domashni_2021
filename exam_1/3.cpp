#include <iostream>
using namespace std;
int main()
{

	unsigned  number;

	do
	{
		cout << "Please enter a number between 3 and 25: ";
		cin >> number;
	} while (number < 3 || number >25);


	for (size_t i = 0; i < number - 1; i++)
	{
		// First row
		if (i == 0)
		{
			for (size_t j = 0; j < 5; j++)
			{
				cout << "*";
			}
			for (size_t j = 0; j < (number - 2) * 2; j++)
			{
				cout << " ";
			}
		

			for (size_t j = 0; j < 5; j++)
			{
				cout << "*";
			}

		}
		else
		{
			// Spaces before the left
			for (size_t j = 0; j < i; j++)
			{
				cout << " ";
			}
			cout << "*";
			for (size_t i = 0; i < 3; i++)
			{
				cout << " ";
			}
			cout << "*";
		
			// Spaces inbetween in the parts
			// -2(for bottom row and upper) 
			// -1 don't count the second last row
			// *2 - because we need spaces from the left tot the center and from the center to the right
			for (size_t j = ((number - i - 1) * 2) - 2; j > 0 ; j--)
			{
				cout << " ";
			} 
			cout << "*";

			// The spaces betweeb the walls of the right side 
			for (size_t i = 0; i < 3; i++)
			{
				cout << " ";
			}
			cout << "*";

		}



		cout << endl;
	}


	//The bottom row
	//Spaces
	for (size_t i = 0; i < number-1; i++)
	{
		cout << " ";
	}
	for (size_t i = 0; i < 8; i++)
	{
		cout << "*";
	}










	return 0;
}
