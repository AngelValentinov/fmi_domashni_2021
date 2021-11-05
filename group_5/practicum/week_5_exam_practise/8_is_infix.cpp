#include <iostream>
using namespace std;
int main()
{

	unsigned numberN, numberK;
	cin >> numberN >> numberK;

	if (numberK == 0)
	{
		cerr << "Invalid input.";
		return 1;
	}

	if (numberK > numberN)
	{
		cerr << "Wrong input.";
		return 1;
	}
	unsigned tempNumber = numberN;
	unsigned lastDigitFirstNumber = tempNumber % 10;
	unsigned lastDigitsecondNumber = numberK % 10;
	unsigned tempNumberSecond = numberK;
	bool isInfix = true;

	while (tempNumberSecond)
	{
		while ((lastDigitsecondNumber != lastDigitFirstNumber) && tempNumber)
		{
			tempNumber /= 10;
			lastDigitFirstNumber = tempNumber % 10;

			if (tempNumber < numberK || tempNumber == 0)
			{
				cout << "Not infix";
				isInfix = false;
				break;
			}

		}

		while ((lastDigitsecondNumber == lastDigitFirstNumber))
		{

			tempNumberSecond /= 10;
			if (tempNumberSecond == 0)
			{
				isInfix = true;
				break;
			}
			lastDigitsecondNumber = tempNumberSecond % 10;

		}

	}


	cout << isInfix ? "true" : "false";

	return 0;
}