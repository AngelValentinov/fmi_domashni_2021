#include <iostream>
using namespace std;
int main()
{

	int number;;
	cin >> number;
	for (size_t i = 0; i < number; i++)
	{
		for (size_t j = 0; j < number - i; j++)
		{
			cout << " ";
		}

		cout << "*";

		for (size_t j = 0; j < i; j++)
		{
			cout << "**";
		}
		cout << endl << endl;
	}

	for (size_t i = 0; i < number / 2; i++)
	{
		for (size_t j = 0; j <= number - 1; j++)
		{
			cout << " ";
		}
		cout << "*" << endl<<endl;
	}

	return 0;
}
