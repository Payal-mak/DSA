#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int count = 0;
    // check till sqrt(n)
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    return (count == 2);
}

void prime_factors(int n)
{
    vector<int> ls;

    // start from 2 and running till sqrt(n)
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) // first check if it divides n
        {
            if (prime(i)) // then check if it is prime
                ls.push_back(i);

            if ((n / i) != i && prime(n / i)) // for example, 5(i) x 7(n/i) = 35, and 7 is also a prime number
                ls.push_back(n / i);          // hence 7 is also added to the list
        }
    }

    for (int i = 0; i < ls.size(); i++)
        cout << ls[i] << " ";

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