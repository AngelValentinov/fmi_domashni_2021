#include<iostream>
using namespace std;


int findNumber(int number)
{
    int i = 1;
    int prod = 1;

    while (prod < number)
    {
        i++;
        prod = i * i;
    };

    return --i;
}

int main()
{
    int number = 15;

    cout << findNumber(number);



    return 0;
}