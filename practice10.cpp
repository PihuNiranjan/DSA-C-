#include <iostream>
using namespace std;
/*
D
CD
BCD
ABCD
*/
int main()
{
        char d = 'D';
    for (int row = 1; row <= 4; row++)
    {
        char l = d;
        for (int col = 1; col <= row; col++)
        {
            cout << l;
            l++;
        }
        d = d -1;
        cout << endl;
    }

    return 0;
}