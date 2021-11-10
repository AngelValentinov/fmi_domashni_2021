#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

    // Wrong
	bool inFigure = ((x >= -2 && x <= 2) && (y >= -2 && y <= 2) && (x * x + y * y >= 4)) || (x >= 0 && x <= 2) && (y >= 0 && y <= 2);

	return 0;
}
