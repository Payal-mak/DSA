#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int count = 1;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    bool res = (count <= 2) ? true : false;
    return res;
}

void prime_factors(int n)
{
    vector<int> ls;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (prime(i) == 1)
            {
                ls.push_back(i);
            }
        }
    }
    for (int i = 0; i < ls.size(); i++)
    {
        cout << ls[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    bool res = prime(n);
    cout << "is prime: " << res << endl;
    prime_factors(n);
    return 0;
}