#include <iostream>
using namespace std;
int checknum(int arr[], int sizes)
{
    int ans = 0;
    for (int i = 0; i < sizes; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int j = 1; j < sizes; j++)
    {
        ans = ans ^ j;
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 4};

    int size = sizeof(arr) / sizeof(int);
    cout << checknum(arr, size);

    return 0;
}