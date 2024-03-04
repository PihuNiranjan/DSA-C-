#include <iostream>
using namespace std;
/*
*
**
***
****
*****

1
12
123
1234
12345

*/
int main()
{
    int l = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // cout<<" * ";
            // cout<<j;
            cout << l;
            l++;
        }
        cout << "\n";
    }
    return 0;
}