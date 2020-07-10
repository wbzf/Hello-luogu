#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int n, int m)
{
    int minn;
    if (n > m)
    {
        minn = m;
    }
    else
    {
        minn = n;
    }
    for (int i = 2; i < minn; i++)
    {
        if ((n % i == 0) && (m % i == 0))
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> number;
    number.push_back(a);
    number.push_back(b);
    number.push_back(c);
    sort(number.begin(), number.end());
    int x = gcd(number[0], number[1]);
    cout << number[0] / x << "/" << number[2] / x << endl;
    return 0;
}
