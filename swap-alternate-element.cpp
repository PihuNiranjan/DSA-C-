#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    int first = 0, second = first + 1;
    while (second < size)
    {
        swap(arr[first], arr[second]);
        first = first + 2;
        second = first + 1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    cout << "Element Before Swapping" << endl;
    display(arr, size);
    swapAlternate(arr, size);
    cout << "Element After Swapping" << endl;
    display(arr, size);

    return 0;
}