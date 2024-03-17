#include <iostream>
using namespace std;

int smallestele(int arr[], int size)
{
    int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (smallest <= arr[i])
        {
            continue;
        }
        else
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

int largestele(int arr[], int size)
{
    int largest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (largest >= arr[i])
        {
            continue;
        }
        else
        {
            largest = arr[i];
        }
        };

    return largest;
}

int main()
{
    int arr[10] = {1, 2, 5, 6, 9, 8, 7, 4, 5, 1};
    int size = sizeof(arr) / sizeof(int);
    cout << "The largest element of the arr is " << largestele(arr, size) << endl
         << endl;
    cout << "The smallest element of the arr is " << smallestele(arr, size) << endl;
    return 0;
}