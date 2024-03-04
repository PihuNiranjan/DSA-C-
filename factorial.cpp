#include <iostream>
using namespace std;
int main()
{
    cout << "Factorial code \n";
    double long n, pro = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        pro = pro * i;
    }
    cout << "the factorial of " << n << " is " << pro;
    return 0;
} // namespace std;
