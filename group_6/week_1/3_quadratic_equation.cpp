#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double quadratic_coef,linear_coef,constant;
cout <<"Enter the quadratic coefficient:";
cin >> quadratic_coef;
cout <<"Enter linear coefficient:";
cin >> linear_coef;
cout <<"Enter c:";
cin >> constant;


double discriminant = pow(linear_coef,2) - (4 * quadratic_coef * constant);

if (discriminant < 0)
{
    cout << "No roots in the real numbers."<<endl;
}
else if (discriminant == 0)
{
    cout << ((-linear_coef)/2*quadratic_coef)<<endl;
}
else
{
    cout <<"x1 = " << (((-linear_coef) - sqrt(discriminant))/(2*quadratic_coef)) << endl;
    cout <<"x2 = " << (((-linear_coef) + sqrt(discriminant))/(2*quadratic_coef)) << endl;
};

return 0;
}
