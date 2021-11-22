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
void leaveNumbers(char str[], char strNumber[])
{

	unsigned length = StrLen(str);
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		if (str[i]>= '0' && str[i] <= '9')
		{
			strNumber[j] = str[i];
			j++;
		}
	}

	strNumber[j] = '\0';
}

int main()
{

	const int maxSize = 64;

	char str[maxSize];
	char numberString[maxSize];
	cin >> str;
	leaveNumbers(str, numberString);
	cout << numberString;
	return 0;
}

