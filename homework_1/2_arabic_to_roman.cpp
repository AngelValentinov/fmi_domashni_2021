
#include <iostream>
using namespace std;
int main()
{
	unsigned int number;
	
	do
	{
		cout << "Please, enter a number between 1 and 999: ";
		cin >> number;
	} while (number < 1 || number > 1000);

	// Digit of the thousands
	switch ((number / 1000) % 10)
	{
	case 1: cout << "M";    break;
	default:	break;
	}

	// Digit of the hundreds
	switch ((number / 100) % 10)
	{
	case 1: cout << "C";    break;
	case 2: cout << "CC";   break;
	case 3: cout << "CCC";  break;
	case 4: cout << "CD";   break;
	case 5: cout << "D";    break;
	case 6: cout << "DC";   break;
	case 7: cout << "DCC";  break;
	case 8: cout << "DCCC"; break;
	case 9: cout << "CM";   break;
	default:	break;
	}

	// Digit of the tens
	switch ((number / 10) % 10)
	{
	case 1: cout << "X";    break;
	case 2: cout << "XX";   break;
	case 3: cout << "XXX";  break;
	case 4: cout << "XL";   break;
	case 5: cout << "L";    break;
	case 6: cout << "LX";   break;
	case 7: cout << "LXX";  break;
	case 8: cout << "LXXX"; break;
	case 9: cout << "XC";   break;
	default:	break;
	}

	// Digit of the units
	switch (number % 10)
	{
	case 9: cout << "IX";   break;
	case 8: cout << "VIII";	break;
	case 7: cout << "VII";	break;
	case 6: cout << "VI";	break;
	case 5: cout << "V";	break;
	case 4: cout << "IV";	break;
	case 3: cout << "III";	break;
	case 2: cout << "II";	break;
	case 1: cout << "I";	break;
	default:	break;
	}
	return 0;
}
