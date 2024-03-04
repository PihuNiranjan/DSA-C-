#include <iostream>
using namespace std;

int sumnum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    int num, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    sum = sumnum(num);
    cout << "The sum of the digit of " << num << " is " << sum << "\n";
    return 0;
}
