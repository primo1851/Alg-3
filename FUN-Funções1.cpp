#include <iostream>
#include <cmath>

using namespace std;

int calc_a(int x)
{
    int a = 0;
    a = 2 * pow(x, 2) + 3 * x - 1;
    return a;
}

int calc_b(int x)
{
    int b = 0;
    b = pow(x, 3);
    return b;
}

int calc_c(int y)
{
    int c = 0;
    c = pow(y, 3);
    return c;
}

int main()
{
    int a = 0, b = 0, c = 0, x = 0, y = 0;

    cin >> x >> y;

    a = calc_a(x);
    b = calc_b(x);
    c = calc_c(y);

    cout << "a = " << a << endl;

    cout << "b = " << b << endl;

    cout << "c = " << c << endl;
    return 0;
}