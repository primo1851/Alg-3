#include <iostream>
#include <iomanip>

using namespace std;

float ideal(float h, char sexo)
{
    float y;

    if (sexo == 'M')
        y = 72.7 * h - 58;

    else
        y = 62.1 * h - 44.7;
    return (y);
}
int main()
{
    float h;//entrada da altura
    char sexo;// entrada do sexo

    float saida;

    cin >> h >> sexo;

    saida = ideal(h, sexo);

    cout << setprecision(4) << "Peso ideal = " << saida << " kg" << endl;

    return 0;
}

