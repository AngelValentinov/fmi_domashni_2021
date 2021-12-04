#include <iostream>
using namespace std;

void fillArray(int arraySize, int* array)
{
	for (size_t i = 0; i < arraySize; i++)
	{
		array[i] = i + 1;
	}
}

bool onesZerosCounter(int number)
{
	size_t onesCounter = 0;
	size_t zerosCounter = 0;
	int mask = 1;
	while (number)
	{
		if ((number & mask) == 1)
		{
			onesCounter++;
		}
		if ((number & mask) == 0)
		{
			zerosCounter++;
		}
		number >>= 1;
	}
	if (number == 0)
	{
		zerosCounter++;
	}
	return (zerosCounter == onesCounter) ? (true) : (false);
	
}

bool isPrime(int number)
{
	for (size_t i = 2; i < number/2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

void countSpecialNumbers(int number, int* array)
{
	for (size_t i = 0; i < number; i++)
	{
		if (isPrime(array[i]) && onesZerosCounter(array[i]))
		{
			cout << array[i] << " ";
		}
	}
}

int main()
{
	int number;
	cin >> number;

	int* array = new(nothrow) int[number];
	// There is just one problem
	// How to check if there is enought memory 


	fillArray(number, array);

	countSpecialNumbers(number, array);
	delete [] array;
	return 0;
}