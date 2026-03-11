#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    int count = (int)(log10(n) + 1);
    return count;
}

int main()
{
    int n;
    n = 7789;
    int res = func(n);
    cout << res << endl;
    return 0;
}