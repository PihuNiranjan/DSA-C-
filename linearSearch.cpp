#include <iostream>
using namespace std;

// LINEAR SEARCH

bool checkele(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 6, 9, -9, 8, -45, 96, -98, 5231, 14, 2, 3, 6, 9, 8, 7, 4, 5, 8, 5, 2, 56, 2, 16, 10, 2003};
    int size = sizeof(arr) / sizeof(int);
    int element;
    cout << "enter the element that you want to search : " << endl;
    cin >> element;

    if (checkele(arr, size, element))
    {
        cout << " The searched element is Present\n ";
    }
    else
    {
        cout << "The searched element is Absent\n";
    }
    return 0;
}