#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // pre-compute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }

    int q;
    cin >> q;

    // fetch
    while (q--)
    {
        char character;
        cin >> character;
        cout << "the " << character << " " << "appeared " << hash[character] << " " << "times" << endl;
    }
    return 0;
}

// T.C. = O(256)
// the maximum size of the character hash array will always be 256, as there are total 256 ASCII characters
// if the given array only contains lowercase letters or uppercase letters, them the size of the hash array would be 26