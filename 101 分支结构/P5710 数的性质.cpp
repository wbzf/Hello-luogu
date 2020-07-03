#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int flag1 = 0, flag2 = 0;
    if (x % 2 == 0)
    {
        flag1 = 1;
    }
    if (x > 4 && x <= 12)
    {
        flag2 = 1;
    }
    int a = 0, b = 0, c = 0, d = 0;
    if (flag1 == 1 && flag2 == 1)
    {
        a = 1;
    }
    if (flag1 == 1 || flag2 == 1)
    {
        b = 1;
    }
    if ((flag1 == 1 && flag2 == 0) || (flag1 == 0 && flag2 == 1))
    {
        c = 1;
    }
    if (flag1 == 0 && flag2 == 0)
    {
        d = 1;
    }
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
