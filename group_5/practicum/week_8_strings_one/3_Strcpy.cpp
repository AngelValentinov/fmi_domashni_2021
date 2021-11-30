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

void strCpy(char str1[], const char str2[])
{
	unsigned len = StrLen(str2);
	for (size_t i = 0; i < len; i++)
	{
		str1[i] = str2[i];
	}
	str1[len] = '\0';
}


int main()
{
	const int maxSize = 64;

	char str1[maxSize];
	char str2[maxSize];
	cin >> str1;
	cin >> str2;

	strCpy(str1, str2);

	cout << str1;

	return 0;
}
