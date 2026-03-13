#include <bits/stdc++.h>
using namespace std;

void take_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    take_input(arr, n);

    // pre-compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // map always stores the elements in the sorted order
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << "the " << number << " " << "appeared " << mpp[number] << " " << "times" << endl;
    }
    return 0;
}

// T.C. will be reduced significantly to log(n) as the map only stores the unique elements which are present in the given array