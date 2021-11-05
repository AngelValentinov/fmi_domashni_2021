#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

	unsigned a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin	>> b;
	


	unsigned sumDigits = 0;
	unsigned prodDigits = 1;
	unsigned counter = 0;
	



		for (int i = a; i <= b; i++)
		{
			int temp = i;
			while (temp > 0)
			{

				sumDigits += (temp % 10);
				prodDigits *= (temp % 10);
				temp /= 10;

			}

			if (sumDigits == prodDigits)
			{
				counter++;
			}

			sumDigits = 0;
			prodDigits = 1;
		}



		cout << counter;

	








	return 0;
}

