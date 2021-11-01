#include <iostream>
using namespace std;


int main()
{
	int a, b;
	cin >> a >> b;

	bool isEqual = b - a > 10;
	int currentNumber = a;
	int maximum = 1;

	if (isEqual)
	{
		while (currentNumber >= a && currentNumber < b)
		{
			// Check if number is prime
			bool isPrime = true;
			int i = 2;
			while (currentNumber > i)
			{
				if (currentNumber % i == 0)
				{
					isPrime = false;
					break;
				}
				i++;
			}

			if (isPrime)
			{
				// Minimal element if isPrime is TRUE && last digit is 7
				if ((maximum < currentNumber) && (currentNumber % 10 == 7))
				{
					maximum = currentNumber;
				}
			}
			currentNumber++;
		}
	}
	cout << maximum;
	return 0;
}
