#include <iostream>
using namespace std;
/*
   1
  121
 12321
1234321
*/
int main()
{
    int num = 9;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " "<<k;
        }
        for (int l = i - 1; l > 0; l--)
        {
            cout << " " << l;
        }
        cout << endl;
    }
    return 0;
}