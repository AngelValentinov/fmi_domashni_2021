#include <iostream>
using namespace std;

unsigned int StrLen(const char str[])
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int strCmp(const char strFirst[], const char strSecond[])
{

	unsigned int i = 0, j = 0;

	while (strFirst[i] != '\0' || strSecond[j] != '\0')
	{
		if (strFirst[i] > strSecond[i])
		{
			return 1;
		}
		else if (strFirst[i] < strSecond[i])
		{
			return -1;
		}

		i++;
		j++;
	}
	return 0;

}



int main()
{
	const int maxSize = 64;

	char strFirst[maxSize];
	char strSecond[maxSize];
	cin >> strFirst;
	cin >> strSecond;


	cout << strCmp(strFirst, strSecond);

	return 0;
}
