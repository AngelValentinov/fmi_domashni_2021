// Да се напише програма, която извежда върху екрана следния триъгълник : 
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	for (size_t j = 0; j <= number; j++)
	{
		for (size_t i = 1; i <= j; i++)
		{
			cout << i;
			cout << " ";
		}
		cout << endl;
	}

}
