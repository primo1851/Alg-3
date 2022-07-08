#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
float raiz(float x, float x0, float e)
{
    float saida = 0;
    if (abs(x0 * x0 - x) <= e)
        return x0;

    else
    {
        return raiz(x, (x0 * x0 + x) / (2 * x0), e);
    }
}
int main()
{
    float x, x0, e; // variaveis

    cin >> x >> x0 >> e; // entrada de variaveis

    cout << fixed << setprecision(4) << raiz(x, x0, e) << endl;

    return 0;
}