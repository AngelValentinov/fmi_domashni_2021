#include <iostream>
using namespace std;
int main()
{

	int number;
	cin >> number;


	for (size_t i = 1; i <= number; i++)
	{
		//Print left numbers
		for (size_t j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		// Distance prints two spaces
		for (size_t j = 0; j < (number - i) * 2; j++)
		{
			cout << "  ";
		}
		// IDK how the formula for the number of  '-' 
		// It will affect the above formaula as well

		//if(i == number){
		// for{
		//	cout<<"-";
		// }}
		
		//Print right numbers
		for (size_t j = i; j > 0; j--)
		{
			cout << j << " ";
		}


		cout << endl;

	}

	for (size_t i = 1; i <number; i++)
	{
		for (size_t j = 1; j <= number-i; j++)
		{
			cout << j << " ";
		}
		for (size_t j = 0; j < i*2; j++)
		{
			cout << "  ";
		}

		for (size_t j = number - i; j > 0; j--)
		{
			cout << j << " ";
		}


		cout << endl;

	}



}
