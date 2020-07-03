#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    }
    else if (T == 3)
    {
        cout << 14 / 4 << endl;
        cout << (14 / 4) * 4 << endl;
        cout << 14 - (14 / 4) * 4 << endl;
    }
    else if (T == 4)
    {
        printf("%.3f", 500.0 / 3);
    }
    else if (T == 5)
    {
        cout << (260 + 220) / (12 + 20) << endl;
    }
    else if (T == 6)
    {
        cout << sqrt(pow(6, 2) + pow(9, 2)) << endl;
    }
    else if (T == 7)
    {
        cout << 100 + 10 << endl;
        cout << 110 - 20 << endl;
        cout << 0 << endl;
    }
    else if (T == 8)
    {
        double n = 3.141593;
        cout << 2 * 5 * n << endl;
        cout << pow(5, 2) * n << endl;
        cout << 4 / 3.0 * n * pow(5, 3) << endl;
    }
    else if (T == 9)
    {
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
    }
    else if (T == 10)
    {
        cout << 9 << endl;
    }
    else if (T == 11)
    {
        cout << 100.0 / (8 - 5) << endl;
    }
    else if (T == 12)
    {
        cout << 13 << endl;
        cout << "R" << endl;
    }
    else if (T == 13)
    {
        double n = 3.141593;
        double sum = 4 / 3.0 * n * pow(4, 3) + 4 / 3.0 * n * pow(10, 3);
        cout << (int)pow(sum, 1.0 / 3) << endl;
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }
    return 0;
}