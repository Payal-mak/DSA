// this program actually stores the number in reverse order
#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        // to extract the last digit of any number, we modulo by 10, as modulo by 10 gives us the remainder
        // to count the number of digits, this step is not necessary
        int last_digit = n % 10;
        // and to move to the next step, we need to remove that last digit
        // to remove the last digit, we divide by 10
        revNum = (revNum * 10) + last_digit;
        n = n / 10;
    }
    cout << revNum << endl;
}

int main()
{
    int n;
    n = 7789;
    func(n);
    return 0;
}