#include <iostream>
using namespace std;
/*
AAA
BBB
CCC
*/
int main()
{
    int lol = 1;
    char op = 'A';
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << op;
        }
        cout << "\n";
        op = op + 1;
    }
    return 0;
}