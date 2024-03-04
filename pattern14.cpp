#include <iostream>
using namespace std;
/*
   *
  ***
 *****
*******        
 *****
  ***
   *
 */
int main()
{
    cout << "Enter the Number of rows : "<<endl;
    int num = 5;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
    int l = num;
    for (int a = 1; a <= num - 1; a++)
    {
        /* code */
        for (int b = 1; b <= a; b++)
        {
            cout << " ";
        }
        for (int k = 2 * l - 3; k > 0; k--)
        {
            cout << "*";
        }
            l--;

        cout << endl;
    }

    /*

    */
    return 0;
}