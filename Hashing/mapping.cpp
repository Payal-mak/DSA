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