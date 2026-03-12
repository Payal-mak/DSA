// using prime factorization method
#include <bits/stdc++.h>
using namespace std;

void prime_factors(int n)
{
    vector<int> ls;
    // start from 2 -> sqrt(n)
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        ls.push_back(n);
    }
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    prime_factors(n);
    return 0;
}