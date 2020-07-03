#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p = 0.5 * (a + b + c);
    double sum = pow(p * (p - a) * (p - b) * (p - c), 1.0 / 2);
    printf("%.1f", sum);
    return 0;
}