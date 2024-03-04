#include <iostream>
using namespace std;
/*
ABC
BCD
CDE
*/
int main()
{
        // char op = 'A';
    for (int i = 1; i <= 3; i++)
    {
        // char ok = op;
        for (int j = 1; j <= 3; j++)
        {
            char l = 'A' + i + j - 2;
             cout << l;
            // ok = ok + 1;
        }
        cout << "\n";
        // op++;
    }
    return 0;
}