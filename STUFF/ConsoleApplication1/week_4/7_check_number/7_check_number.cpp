// 7_check_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	unsigned int n, m;
	cin >> n >> m;

	if (n >= m || n < 0 || m > 9999)
	{
		cerr << "Invalid input!";
		return 1;
	}

	for (int currentNumber = n; currentNumber <= m; currentNumber++)
	{
		bool isValidNumber = ((currentNumber / 1000) * 100 + (currentNumber % 100)) % 11 == 0;
		if (isValidNumber)
		{
			cout << currentNumber << " ";
		}
	}
	return 0;
}

//  int currentNumber;
//	for (int currentNumber = n; currentNumber <= m; currentNumber++)
//	{
//		int firstDigit = currentNumber/1000;
//		int LastTwoDigits = currentNumber % 100;
//		bool isValidNumber = (firstDigit * 100 + LastTwoDigits) % 11 == 0;
//		if (isValidNumber)
//		{
//			cout << currentNumber << " ";
//		}
//	}

