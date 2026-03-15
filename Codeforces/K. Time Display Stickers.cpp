#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> freq(10, 0);
    for (char c : s)
        freq[c - '0']++;

    int ans = 0;

    while (true)
    {

        int h1 = -1;
        for (int d = 0; d <= 1; d++)
        {
            if (freq[d])
            {
                h1 = d;
                break;
            }
        }
        if (h1 == -1)
            break;
        freq[h1]--;

        int h2 = -1;
        for (int d = 0; d <= 9; d++)
        {
            if (freq[d])
            {
                h2 = d;
                break;
            }
        }
        if (h2 == -1)
            break;
        freq[h2]--;

        int m1 = -1;
        for (int d = 0; d <= 5; d++)
        {
            if (freq[d])
            {
                m1 = d;
                break;
            }
        }
        if (m1 == -1)
            break;
        freq[m1]--;

        int m2 = -1;
        for (int d = 0; d <= 9; d++)
        {
            if (freq[d])
            {
                m2 = d;
                break;
            }
        }
        if (m2 == -1)
            break;
        freq[m2]--;

        ans++;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}