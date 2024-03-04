#include <iostream>
using namespace std;
/*
D
DC
DCB
DCBA
*/
int main()
{
    for (int i = 0; i < 4; i++)
    {
        char c = 'D';
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            c = c - 1;
        }
        cout << endl;
    }
    return 0;
}