#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    int count = 0;
    while (n > 0)
    {
        // to extract the last digit of any number, we modulo by 10, as modulo by 10 gives us the remainder
        // to count the number of digits, this step is not necessary
        // int last_digit = n % 10;
        count++;
        // and to move to the next step, we need to remove that last digit
        // to remove the last digit, we divide by 10
        n = n / 10;
    }
    return count;
}

int main()
{
    int n;
    n = 7789;
    int res = func(n);
    cout << res << endl;
    return 0;
}