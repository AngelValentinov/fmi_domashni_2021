#include <iostream>
using namespace std;
int main()
{
  
	int tomatoes, pappers, carrots, olives, potatoes, additives;
	bool friendInNeed;

	cin >> tomatoes >> pappers >> carrots >> olives >> potatoes >> additives;
	cin >> friendInNeed;


	bool forSalat = tomatoes >= 1 && pappers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 4 && additives >= 150;
	bool forSoup = tomatoes >= 2 && pappers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && additives >= 200;
	bool forGuvec = tomatoes >= 5 && pappers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && additives >= 300;

	bool enoughResources = (forSalat) || (forSoup && friendInNeed) || (forGuvec && friendInNeed);

	if (enoughResources)
	{
		cout << "Enough resources";
	}
	else
	{
		cout << "Not enough.";
	}

	return 0;



}
