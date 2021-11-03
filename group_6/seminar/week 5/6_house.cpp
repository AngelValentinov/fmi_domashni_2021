#include <iostream>
using namespace std;
int main()
{

	int number;
	cin >> number;




	// Making the roof
	for (int i = 0; i <= number; i++)
	{
		// Left part of the roof
		for (int j = number - i; j > 0; j--)
		{
			cout << " ";
		}
		cout << "/";

		// Spaces between left and right part of the roof 
		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}
		cout << "\\";

		cout << endl;
	}

	// The lower part of the roof	
	cout << " ";
	for (size_t i = 0; i < number * 2; i++)
	{
		cout << "-";
	}
	cout << endl;

	//Walls
	for (size_t i = 0; i < number; i++)
	{
		cout << '|';

		for (size_t j = 1; j < number * 2 + 1; j++)
		{
			cout << " ";
		}
		cout << '|';
		cout << endl;
	}


	// Ground
	for (size_t i = 0; i < (number + 1) * 2; i++)
	{
		cout << "=";
	}


	return 0;
}