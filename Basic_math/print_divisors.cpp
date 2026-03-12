#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n = 36;
    func(n);
    return 0;
}