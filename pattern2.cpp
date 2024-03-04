#include <iostream>
using namespace std;
/*
123
456
789
*/
int main()
{
    int lol = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << lol;
            lol++;
        }
        cout << "\n";
    }
    return 0;
}