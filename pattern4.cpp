#include <iostream>
using namespace std;
/*
1
23
345
4567
*/
int main()
{
    int lol = 1;
    for (int i = 1; i <= 4; i++)
    {
    int val = i;
        for (int j = 1; j <= i; j++)
        {
           cout<<val;
           val++;
        }
        cout << "\n";
       
    }
    return 0;
}