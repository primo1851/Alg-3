#include <iostream>

using namespace std;
int fibonacci(int n)
{
    if (n == 0 or n == 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n = 0;
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}