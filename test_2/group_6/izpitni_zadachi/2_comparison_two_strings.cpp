/* Да се напише програма, която въвежда от клавиатурата два символни низа X и N с
 произволна равна дължина определена от потребителя(реализирайте това с
   динамична памет).Нека низът X е съставен само от първите 10 малки латински букви
   (‘a’ - ’j’), а низът N - само от цифрите(‘0’ - ‘9’).Програмата да изписва на стандартния
   изход “Yes”, ако цифрите в N съвпадат с поредния номер в азбуката на съответната им
   буква в X(броено от 0).
   Примерни входове
   Вход
   abc
   012
   Изход
   Yes
   Вход
   BbDae
   11404
   Изход
   False
   */
#include <iostream>
using namespace std;
unsigned strLen(const char* string)
{
	unsigned i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return i;
}
int alphabeticPosition(char c)
{
	if (c >= 'a' && c <= 'j')
	{
		return (int)c - 97;
	}
}
int numericPosition(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (int)(c - '0');
	}
}
int stringComparison(const char* stringOne, const char* stringTwo)
{
	unsigned lenOne = strLen(stringOne);
	for (size_t i = 0; i < lenOne; ++i)
	{
		if (alphabeticPosition(stringOne[i]) != numericPosition(stringTwo[i]))
		{
			return false;
		}
	}
	return true;
}
int main()
{
	unsigned length;
	cout << "The length is: ";
	cin >> length;

	char* firstString = new(nothrow) char[length + 1];
	char* secondString = new(nothrow) char[length + 1];

	cin >> firstString;
	cin >> secondString;

	stringComparison(firstString, secondString) ? cout << "True" : cout << "False";
	delete[] firstString;
	delete[] secondString;
	return 0;
}