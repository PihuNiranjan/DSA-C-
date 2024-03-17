#include <iostream>
#include <limits.h>
using namespace std;
int reverse(int num)
{
    int digit, ans = 0;
    while (num != 0)
    {
        digit = num % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            cout << "out of range......";
            return 0;
        }
        ans = ans * 10 + digit;
        num = num / 10;
    }
    return ans;
}
int main()
{
    cout << "Enter the Number : " << endl;
    int num;
    cin >> num;

    cout << reverse(num) << endl;
    return 0;
}