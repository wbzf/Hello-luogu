#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = (c * 60 + d) - (a * 60 + b);
    cout << sum / 60 << " " << sum % 60 << endl;
}