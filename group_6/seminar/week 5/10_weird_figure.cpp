#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	
	for (size_t i = 0; i < number; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
				cout << "-";
		}
		cout << "0";
		for (size_t j = number - i - 1; j > 0; j--)
		{
			cout << "+";
		}
		cout << endl;
	}

	return 0;
}
