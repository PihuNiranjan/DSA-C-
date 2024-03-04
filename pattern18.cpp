#include <iostream>
using namespace std;
/*
1234554321
1234**4321
123****321
12******21
1********1

*/
int main()
{   
    cout<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "**";
        }
        for (int l = 5 - i + 1; l > 0; l--)
        {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}