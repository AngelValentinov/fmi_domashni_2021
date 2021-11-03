#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int firstDigit = number / 1000;
	bool isOdd = !(firstDigit % 2 == 0);
	bool isBiggest = true;

	int lastDigit = number % 10;
	while (number && isBiggest)
	{
		if (firstDigit < lastDigit)
		{
			isBiggest = false;
		}
		number /= 10;
		lastDigit = number % 10;
	}

	if (isOdd && isBiggest)
	{
		cout << "The digit is the biggest and is odd.";
	}
	else if (isOdd && !isBiggest)
	{
		cout << "The digit is odd but not the biggest.";
	}
	else if (!isOdd && isBiggest)
	{
		cout << "The digit is even and is the biggest.";
	}
	else
	{
		cout << "The digit is even and is not the biggest.";
	}


	return 0;
}
