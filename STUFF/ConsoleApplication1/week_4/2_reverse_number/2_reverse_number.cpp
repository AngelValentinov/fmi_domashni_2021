#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int reverseNumber = 0;
	int temp = number;
	
	while (temp)
	{
		reverseNumber =reverseNumber*10 + temp % 10;
		temp /= 10;
	}

	if ((reverseNumber % 2 == 0) && (number % 2 == 0) || (reverseNumber % 2 != 0) && (number % 2 != 0))
	{
		cout << reverseNumber << " - YES";
	}							   
	else						   
	{							   
		cout << reverseNumber << " - NO";
	}





	return 0;
}