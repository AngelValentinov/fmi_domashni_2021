#include <iostream>
using namespace std;
const int maxSize = 32;
void readArray(unsigned number, int* array)
{
	for (size_t i = 0; i < number; i++)
	{
		cin >> array[i];
	}
}
unsigned Abs(int number)
{
	if (number > 0)
	{
		return number;
	}
	else
	{
		return -number;
	}
}
bool prodNumDigitsOneDigit(int number)
{
	int prod = 1;
	while (number)
	{
		prod *= (number % 10);
		number / 10;
	}
	if (Abs(prod) < 10)
	{
		return true;
	}
	return false;
}

void checkNumbers(int number, int* array)
{
	unsigned counterNumbers = 0;

	for (size_t i = 0; i < number; i++)
	{
		if (prodNumDigitsOneDigit(array[i]))
		{
			counterNumbers++;
		}
	}
	if (counterNumbers == 0)
	{
		cout << "There are no such numbers.";
	}
	else
	{
		cout << counterNumbers;
	}
}

int main()
{
	unsigned number;
	cin >> number;
	int array[maxSize];
	readArray(number, array);
	checkNumbers(number, array);
	return 0;
}
