#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

float glue;
unsigned wood_bar, litres_paint;

cin >> glue >> wood_bar >> litres_paint;

unsigned glue_prod = glue / 10;
unsigned wood_prod = wood_bar/4;
unsigned litres_prod = litres_paint / 20;

unsigned number_prod = 0;

if (glue_prod >= wood_prod)
    if (wood_prod >= litres_prod)
        number_prod = litres_prod;
    else
        number_prod = wood_prod;
else
    if (litres_prod >= wood_prod)
        number_prod = glue_prod;
    else
        number_prod = litres_prod;

cout << number_prod<<endl;

bool isTrue = (glue - (glue_prod * number_prod)) >= 3 && (wood_bar - (wood_prod*number_prod) >= 2)  && (litres_paint - (litres_prod*number_prod) >= 7);

if (isTrue)
    cout << "Enough for toy"<<endl;
else
    cout<< "Not enough for toy."<<endl;

return 0;
}
