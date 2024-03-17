#include <iostream>
using namespace std;
int complement(int num)
{
    int m = num, mask = 0, ans;
    if (num == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    ans = (~m) & mask;
    return ans;
}
int main()
{
    cout << "Enter the number : " << endl;
    int num;
    cin >> num;
    cout << "answer is " << complement(num) << endl;

    return 0;
}