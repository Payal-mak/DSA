#include <bits/stdc++.h>
using namespace std;

// t.c. = O(min(n1, n2))
int gcd(int n1, int n2)
{
    int gcd_of_two = 1;
    // instead of running the loop from forwards,
    //  the loop can be started from backwards, then it would have a better time complexity
    // for example, n1 = 20, n2 = 40
    for (int i = min(n1, n2); i >= 1; i--) // minimum is 20
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd_of_two = i; // gcd = 20
            break;          // the moment it gets gcd as 20, it breaks
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