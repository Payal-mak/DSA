#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    int gcd_of_two = 1;
    for (int i = 1; i <= n1 || i <= n2; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd_of_two = i;
        }
    }
    return gcd_of_two;
}

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    int res = gcd(n1, n2);
    cout << res << endl;
    return 0;
}