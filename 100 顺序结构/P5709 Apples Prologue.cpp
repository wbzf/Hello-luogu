#include <iostream>
using namespace std;
int main()
{
    double m, t, s;
    cin >> m >> t >> s;
    if (s > m * t)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (int)(m - (s / t)) << endl;
    }
    return 0;
}
