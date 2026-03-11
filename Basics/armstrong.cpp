#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    int original = n;
    int temp = n;
    int count = 0;
    int arm = 0;
    // first count the total number of digits
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    // calculate the armstrong number
    while (n > 0)
    {
        int last_digit = n % 10;
        arm += pow(last_digit, count);
        n /= 10;
    }
    cout << (original == arm) ? true : false;
    cout << endl;
}

int main()
{
    int n = 153;
    func(n);
    return 0;
}