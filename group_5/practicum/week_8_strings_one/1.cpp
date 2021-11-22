#include <iostream>
using namespace std;
unsigned int StrLen(const char str[])
{
	int i = 0;
	char c = str[i];

	while (c != '\0')
	{
		i++;
		c = str[i];
	}
	return i;
}


int main()
{
	const char str[] = "pesho";
	cout << StrLen(str);
	return 0;
}
