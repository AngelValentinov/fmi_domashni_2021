#include <iostream>
using namespace std;
void readArray(unsigned number, int* array)
{
	for (size_t i = 0; i < number; i++)
	{
		cin >> array[i];
	}
}

void printUniqueProducts(int product, int number, int* array)
{
	int currentProduct = 1;
	for (size_t i = 0; i < number; i++)
	{
		for (size_t j = 1; j < number; j++)
		{
			if (j <= i)
			{
				continue;
			}
			if ((array[i] * array[j]) == product)
			{
				cout << array[i] << " " << array[j] << ",";
			}
		}
	}
}
int main()
{
	const int maxSize = 32;
	
	int product;
	cout << "Enter product: ";
	cin >> product;

	unsigned number;
	cout << "Enter size of the array: ";
	cin >> number;
	int array[maxSize];
	readArray(number, array);
	
	printUniqueProducts(product, number, array);

	return 0;
}
