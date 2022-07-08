#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calc_delta(float a, float b, float c)
{
    float delta;

    delta = pow(b, 2) - 4 * a * c;

    return delta;
}

int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
    float delta;

    delta = calc_delta(a, b, c);

    if (delta > 0)
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        return 0;
    }
    else if (delta = 0)
    {
        x1 = (-b) / (2 * a);
        return 0;
    }
    else
        return 1;
}

int main()
{
    float a, b, c;
    float *x1, *x2;
    int saida;

    cin >> a >> b >> c;
    

    saida = calc_raizes(a, b, c, *x1, *x2);

    
    if (saida == 1)
    {
        cout << "Nao ha raizes reais" << endl;
    }

    else 
        cout <<"x1 = " << *x1 << " x2 = " << *x2 << endl;

    return 0;
}