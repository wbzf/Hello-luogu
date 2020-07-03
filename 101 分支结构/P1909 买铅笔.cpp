#include <iostream>
#include <algorithm>
using namespace std;
double sum;
int a[101];
int main()
{
    cin >> sum;
    double a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    double a3, b3, c3;
    a3 = ceil(sum / a1) * a2;
    b3 = ceil(sum / b1) * b2;
    c3 = ceil(sum / c1) * c2;
    a[0] = a3;
    a[1] = b3;
    a[2] = c3;
    sort(a, a + 3);
    cout << a[0] << endl;
}