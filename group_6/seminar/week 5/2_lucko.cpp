#include <iostream>
using namespace std;

int main()
{
	int priceLaptop;
	int usbPorts;
	int ram;
	bool hasSsd;

	cin >> priceLaptop >> usbPorts >> ram >> hasSsd;

	bool buyLaptop = ((priceLaptop >= 1000 && priceLaptop <= 1500) && (usbPorts >= 3) && (ram >= 8) && hasSsd)
	 || ((priceLaptop < 800) && (ram < 8) && !hasSsd);



	return 0;
}
