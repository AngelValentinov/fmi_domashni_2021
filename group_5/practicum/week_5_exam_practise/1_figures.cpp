#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

	bool inFigure =
		((y <= 0 && y >= -2) && (x >= -6 && x <= 2) && (x * x + y * y < 3 * 3)) ||
		((x >= -2 && x <= 2) && (y >= 0 && y <= 2) && (x * x + y * y < 2 * 2)) ||
		((x >= 2 && x <= 6) && (y >= -2 && y <= 0) && (x * x + y * y < 2 * 2));

	// bool inFigureTwo = (x * x + y * y > 3 * 3) && (y >= 3 && y <= 4) && (x <= 3 && x >= -3);
	//  bool inFigureThree = (x * x + y * y > 4) && (y >= -3 && y <= 4) && (x <= -3 && x >= 3);


	return 0;
}
