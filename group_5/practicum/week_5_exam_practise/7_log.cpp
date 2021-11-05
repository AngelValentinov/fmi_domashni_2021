#include <iostream>
using namespace std;
int main()
{
	int numberN;
	cin >> numberN;
	int numberK;
	cin >> numberK;

	// TODO: Check the inout !>= 0

	bool correctInput = (numberN > 0 && numberK > 0) && (numberK != 1);
	if (!correctInput)
	{
		cerr << "Invalid input.";
		return 1;
	}
	// a ^ x = b; logaB=x

	// To see what the log is we have to see what number multiplied by itself * number of times == firstNumber
	//*note: if the number starts becoming too big end the proces and print the closest
	unsigned counter = 0;
	int currentNumber = 1;
	while (currentNumber < numberN)
	{
		currentNumber = currentNumber * numberK;

		if (currentNumber > numberN)
		{
			break;
		}

		counter++;
	}
	cout << counter;



	return 0;
}

