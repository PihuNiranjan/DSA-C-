#include <iostream>
#include <cmath>
using namespace std;

bool poweroftwo(int num)
{
    for (int i = 0; i <= 30; i++)
    {
        int k = pow(2, i);
        if (num == k)
        {
            return true;
            break;
        }
    }

    return false;
}
int main()
{
    cout << "Enter the number : " << endl;
    int num;
    cin >> num;
    if (poweroftwo(num))
    {

        cout << "Number is in power of two" << endl;
    }
    else
    {
        cout << "Number is not in power of two " << endl;
    }

    return 0;
}