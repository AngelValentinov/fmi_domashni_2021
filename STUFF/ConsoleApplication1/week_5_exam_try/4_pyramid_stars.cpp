// 4_pyramid_stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int number;
	cin >> number;

	for (size_t i = 0; i <= number; i++)
	{

		for (size_t j = 0; j < i; j++)
		{
			cout << " ";
		}cout << "*";
		for (size_t j = 0; j < number - i; j++)
		{
			cout << "**";
		}
		cout << endl << endl;
	}

	for (size_t i = 1; i <= number; i++)
	{
		for (size_t j = 0; j < number - i; j++)
		{
			cout << " ";
		}
		if (i != 0)
		{
			cout << "*";
		}

		for (size_t j = 0; j < i; j++)
		{
			cout << "**";
		}
		cout << endl<<endl;
	}



	return 0;
}
