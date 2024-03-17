#include <iostream>
using namespace std;

// 121   ,    123321

void palindrome(int num)
{
    int ans = num;
    int temp, rem = 0;
    while (num > 0)
    {
        temp = num % 10;
        rem = rem * 10 + temp;
        num = num / 10;
    }

    if (rem == ans)
    {
        cout << "number is palindrome " << endl;
    }
    else
    {
        cout << "number is not palindrome " << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    palindrome(num);

    return 0;
}