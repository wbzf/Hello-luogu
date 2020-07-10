#include <iostream>
using namespace std;
int a[101];
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    int temp;
    cin >> temp;
    temp += 30;
    int answer = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (a[i] <= temp)
        {
            answer++;
        }
    }
    cout << answer << endl;
}