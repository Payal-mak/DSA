#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    vector<int> ls;
    // 6 * 6 <= 36
    // 7 * 7 <= 36 false
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int n = 36;
    func(n);
    return 0;
}