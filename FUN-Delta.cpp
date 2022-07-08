#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c)
{
    float delta;

    delta = pow(b, 2) - 4 * a * c;

    return delta;
}

int main()
{
    float a, b, c;
    float delta;

    cin >> a >> b >> c;

    delta = calc_delta(a, b, c);
    cout << "delta = " << delta << endl;

    return 0;
}