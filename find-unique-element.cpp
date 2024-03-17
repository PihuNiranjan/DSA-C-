#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result = result ^ arr[i];
    }
    return result;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);

    cout << "Array element" << endl;
    display(arr, size);
    cout << endl;

    cout << unique(arr, size) << endl;

    return 0;
}