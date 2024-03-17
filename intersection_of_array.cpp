#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2)
{
    int i = 0, j = 0;
    // cout << "dadfad";
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    // array must be sorted for this solution

    int arr1[] = {1, 2, 3, 5, 6};
    // int size1 = sizeof(arr1) / sizeof(int);
    int size1 = 6;

    int arr2[] = {2, 5, 7, 8};
    int size2 = 5;
    // int size2 = sizeof(arr2) / sizeof(int);

    intersection(arr1, arr2, size1, size2);

    return 0;
}