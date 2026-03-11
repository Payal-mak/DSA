#include <bits/stdc++.h>
using namespace std;

// O(sqrt(n))
void func(int n)
{
    int count = 0;
    // 6 * 6 <= 36
    // 7 * 7 <= 36 false
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
    cout << (count == 2) ? true : false;
    cout << endl;
}

int main()
{
    int n = 2;
    func(n);
    return 0;
}