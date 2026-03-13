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
    // n is the size of array
    int n;
    cin >> n;

    int arr[n];
    take_input(arr, n);

    // pre-compute
    int hash_fun[100] = {0}; // assuming values ≤ 99

    for (int i = 0; i < n; i++)
    {
        hash_fun[arr[i]]++;
    }

    int q;
    cin >> q;

    // fetch
    while (q--)
    {
        int number;
        cin >> number;

        cout << "the " << number << " " << "appeared " << hash_fun[number] << " " << "times" << endl;
    }

    return 0;
}