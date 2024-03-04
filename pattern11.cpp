#include <iostream>
using namespace std;
/*
ABC
BCD
CDE
*/
int main()
{
    char c = 'A';
    for (int row = 1; row <= 4; row++)
    {
        char ch = c;
        for (int col = 1; col <= 4; col++)
        {
            cout << char(ch);
            ch = ch + 1;
        }
        c++;
        cout << endl;
    }

    return 0;
}