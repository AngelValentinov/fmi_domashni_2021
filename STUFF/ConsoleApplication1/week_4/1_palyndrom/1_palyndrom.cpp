// Да се напише програма, която след въвеждане на цяло число проверява дали то е палиндром!
// Примерен изход при вход 121: YES
// Примерен изход при вход 1213 : NO
// Примерен изход при вход 123454321 : YES

#include <iostream>
using namespace std;

int main()
{
   
	int number;
	cin >> number;

	int reversedNumber = 0;

	while (number)
	{
		reversedNumber = reversedNumber * 10 + number % 10;
		number /= 10;
	}

	bool isPalyndrom = reversedNumber == number;

	if (isPalyndrom)
	{
		cout << "It is a palyndrom."<<endl;
	}
	else
	{
		cout << "Not a palyndrom."<<endl;
	}


	return 0;
}
