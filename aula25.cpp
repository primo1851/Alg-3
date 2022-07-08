#include <iostream>

using namespace std;

void inverte(float *x, float *y, float x1, float y1)
{

    x1 = *y;
    y1 = *x;

   

    cout << "x = " << x1 << " y = " << y1 << endl;

}
int main()
{
    float x, y;
    float x1, y1;


    cin >> x >> y;

    inverte(&x, &y,x1, y1);
    
    

    return 0;
}