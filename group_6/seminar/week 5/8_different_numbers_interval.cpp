#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	bool hasSameDigits = false;

	for (size_t i = a; i <= b; i++)
	{
		int number = i;
		while (number)
		{

			int storeDigit = number % 10;
			number /= 10;

			if (storeDigit == number% 10)
			{
				hasSameDigits = true;
			}
		}

		if (hasSameDigits)
		{
			break;
		}

	}

	if (hasSameDigits)
	{
		cout << "Has repetitive digits." << endl;
	}
	else
	{
		cout << "Has no repetitive digits." << endl;
	}
	return 0;

}
