#include <iostream>
#include <stdio.h>
using namespace std;
double sum;
int main()
{
    double a;
    cin >> a;
    if (a <= 150)
    {
        sum += a * 0.4463;
    }
    else if (a >= 151 && a <= 400)
    {
        sum += (a - 150) * 0.4663 + 150 * 0.4463;
    }
    else
    {
        sum += 150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663;
    }
    printf("%.1f", sum);
}
