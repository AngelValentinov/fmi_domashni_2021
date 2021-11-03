#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int sumDigits = 0;
	int prodDigits = 1;

	int counter = 0;
	for (size_t i = a; i <= b; i++)
	{
		sumDigits = 0;
		prodDigits = 1;
		int number = i;
		while (number)
		{
			int lastDigit = number % 10;
			number /= 10;
			sumDigits += lastDigit;
			prodDigits *= lastDigit;
		}

		if (prodDigits == sumDigits)
		{
			counter++;
		}
	}
	cout << counter;

	return 0;
}