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

void strCat(char str1[], const char str2[])
{
	int len = StrLen(str1);
	int len2 = StrLen(str2);
	int j = 0;
	for (size_t i = len; i < len2+len; i++)
	{
		str1[i] = str2[j];
		j++;
	}
	str1[len + len2] = '\0';
}


int main()
{

	const int maxSize = 64;

	char str1[maxSize];
	char str2[maxSize];
	cin.getline(str1, maxSize);
	cin.getline(str2, maxSize);

	strCat(str1, str2);

	cout << str1;
	return 0;
}
