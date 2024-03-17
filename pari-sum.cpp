#include <iostream>
using namespace std;
void pairSum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << " " << i << " " << j << endl;
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 6, 5, 4, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int sum = 5;
    pairSum(arr, size, sum);
    return 0;
}