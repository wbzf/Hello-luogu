#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double m, h;
    cin >> m >> h;
    double b = m / pow(h, 2);
    if (b < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (b >= 18.5 && b < 24)
    {
        cout << "Normal" << endl;
    }
    else
    {
        cout << b << endl;
        cout << "Overweight" << endl;
    }
    return 0;
}