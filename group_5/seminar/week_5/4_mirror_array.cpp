#include<iostream>
using namespace std;


void readArray(int sizeA, int arr[])
{

    for (int i = 0; i < sizeA; i++)
    {
        cout << "arr["<<i<<"]=";
        cin >> arr[i];
    }

}


bool isMirror(int number, int arr[])
{

   for (int i = 0; i < number/2; i++)
        {
            if (arr[i] != arr[number-1 - i])
            {
                return false;
            }
        }

    return true;
}


int main()
{

unsigned number;
cin >> number;

int array[32];
readArray(number,array);

cout << (isMirror(number,array) ? "Yes" : "No");


return 0;
}
