#include <iostream>
using namespace std;

int main()
{


	int number;
	cin >> number;

	bool hasSame = false;
	int lastDigit = number % 10;
	while (number && !hasSame)
	{
		number /= 10;
		if (lastDigit == number % 10)
		{
			hasSame = true;
		}
		lastDigit = number % 10;
	}

	if (hasSame)
	{
		cout << "The number has same digits.";
	}
	else
	{
		cout << "The number has different digits.";
	}



	return 0;
}
