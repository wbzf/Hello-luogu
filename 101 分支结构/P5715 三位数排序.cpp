#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> s;
    s.push_back(a);
    s.push_back(b);
    s.push_back(c);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}