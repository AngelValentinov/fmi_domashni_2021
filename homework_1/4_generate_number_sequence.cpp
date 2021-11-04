#include <iostream>
using namespace std;

int main()
{

	unsigned number;
	cin >> number;
	bool isOne = false;

	while (!isOne)
	{
		int numberStars = (number / 10) + 1;
		for (size_t i = 0; i < numberStars; i++)
		{
			cout << "*";
		}

		cout << number << endl;
		if (number % 2 != 0)
		{
			if (number ==1)
			{
				cout << "*"<<number << endl;
				isOne = true;
			}
			number = number * 3 + 1;
		}
		else
		{
			number = number / 2;
		}
	}

		return 0;
}
