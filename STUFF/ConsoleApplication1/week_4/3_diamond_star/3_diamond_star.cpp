#include <iostream>
using namespace std;

int main()
{
 	
	int number;
	cin >> number;
	

	// Upper part
	for (size_t i = 1; i <=number ; i++)
	{
		for (size_t j = 0; j < number - i; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (size_t k = 0; k < i - 1; k++)
		{
			cout << "**";
		}
		cout << endl;
	}

	// Lower part

	for (size_t i = number - 1; i >= 1 ; i--)
	{
		for (size_t j = 0; j < number - i; j++)
		{
			cout << " ";
		}
		cout << "*";

		for (size_t k = 1; k < i; k++)
		{
			cout << "**";
		}
		cout << endl;
	}


	


	return 0;
}