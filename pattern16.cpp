#include <iostream>
using namespace std;

/*
****
***
**
*
*/

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int sp = 1; sp <= i - 1; sp++)
        {
            /* code */ cout << " ";
        }
        for (int st = 1; st <= 5 - i + 1; st++)
        {
            /* code */ cout << "*";
        }
        cout << endl;
    }

    return 0;
}