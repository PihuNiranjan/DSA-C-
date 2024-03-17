#include <iostream>
using namespace std;
void sortarr(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[j] == 1)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0)
        {
            /* code */
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[] = {1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(int);
    sortarr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}