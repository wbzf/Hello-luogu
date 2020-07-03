#include <iostream>
using namespace std;
int main()
{
    unsigned long long x, n, s = 0;
    cin >> x >> n;
    int a[7] = {0, 250, 250, 250, 250, 250, 0};
    for (unsigned long long i = 1; i <= n; i++)
    {
        s += a[x % 7];
        x++;
    }
    cout << s << endl;
    return 0;
}