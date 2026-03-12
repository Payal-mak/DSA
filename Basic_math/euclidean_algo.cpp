#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    int gcd_of_two = 1;
    // gcd(a,b) = gcd(a-b,b) where a>b
    // but, instead of subtracting a, b times, we can directly divide a, b times
    // gcd(a,b) = gcd(a%b, b) where a>b, and when one of them is zero, the other number is the gcd.
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
        if (n1 == 0)
        {
            gcd_of_two = n2;
        }
        else
        {
            gcd_of_two = n1;
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