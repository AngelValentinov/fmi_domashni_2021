#include <iostream>
using namespace std;

int main()
{

	unsigned numberOne, numberTwo;
	cout << "Enter the first number: ";
	cin >> numberOne;
	cout << "Enter the second number: ";
	cin >> numberTwo;



	if (numberOne < numberTwo)
	{
		cout << "false";
		return 0;
	}


	int tempNumberTwo = numberTwo;
	int tempNumberOne = numberOne;

	bool isInfix = false;
	

		while (tempNumberOne)
		{
			int lastDigitSecondNumber = tempNumberTwo % 10;
			int lastDigitFirstNumber = tempNumberOne % 10;
			bool isLastDigitsEqual = (lastDigitFirstNumber == lastDigitSecondNumber);
			tempNumberOne /= 10;

			if (isLastDigitsEqual)
			{
				tempNumberTwo /= 10;

			}

			if (!isLastDigitsEqual)
			{
				tempNumberTwo = numberTwo;
			}


			if (!tempNumberTwo && isLastDigitsEqual)
			{
				isInfix = true;
				break;
			}


		}


		cout << (isInfix ? "true" : "false");






	return 0;
}

