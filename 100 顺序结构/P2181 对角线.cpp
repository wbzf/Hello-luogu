#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    unsigned long long n;
    scanf("%lld", &n);
    printf("%lld\n", (n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4));
    return 0;
}

// n(n-1)(n-2)(n-3)/24 换成 n*(n-1)/2*(n-2)/3*(n-3)/4