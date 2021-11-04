#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	// Neshto ne se polychava, bool mi dava vinagi TRUE ==> za tova hamalski
	bool isOne = (number & 1);
	unsigned onesCounter = 0;
	unsigned biggestCurrent = 0;
		while (number)
		{
			if ((number & 1))
			{
				onesCounter++;
			}

			if (biggestCurrent < onesCounter)
			{
				biggestCurrent = onesCounter;
			}

			if (!(number & 1) && number)
			{
				onesCounter = 0;
			}

			number = number >> 1;
		}
		cout << biggestCurrent;

	return 0;
}

