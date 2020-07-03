#include <iostream>
using namespace std;
int m[101];
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        int a, b;
        cin >> a >> b;
        m[i] = a + b;
    }
    int flag = 1;
    for (int i = 1; i <= 7; i++)
    {
        if (m[flag] < m[i])
        {
            flag = i;
        }
    }
    cout << flag << endl;
}