#include <iostream>
using namespace std;
template <class T>
int length(T &array)
{
    return (sizeof(array) / sizeof(array[0]));
};
int main()
{
    int year, m;
    cin >> year >> m;
    int flag = 0;
    if (year % 4 == 0 && year % 100 != 0)
    {
        flag = 1;
    }
    if (year % 400 == 0)
    {
        flag = 1;
    }
    int big[7] = {1, 3, 5, 7, 8, 10, 12};
    int small[4] = {4, 6, 9, 11};
    int f = -1, ff = 0;
    if (ff == 0)
    {
        for (int i = 0; i < length(big); i++)
        {
            if (m == big[i])
            {
                f = 1;
                ff = 1;
            }
        }
    }
    if (ff == 0)
    {
        for (int i = 0; i < length(small); i++)
        {
            if (m == small[i])
            {
                f = 2;
                ff = 1;
            }
        }
    }
    if (ff == 0)
    {
        f = 3;
    }
    if (f == 1)
    {
        cout << 31 << endl;
    }
    if (f == 2)
    {
        cout << 30 << endl;
    }
    if (f == 3 && flag == 0)
    {
        cout << 28 << endl;
    }
    if (f == 3 && flag == 1)
    {
        cout << 29 << endl;
    }
    return 0;
}