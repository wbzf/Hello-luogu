#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s1, s2;
    s1 = 5 * n;
    s2 = 3 * n + 11;
    if (s1 < s2)
    {
        cout << "Local" << endl;
    }
    else
    {
        cout << "Luogu" << endl;
    }
    return 0;
}