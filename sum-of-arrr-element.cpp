#include <iostream>
using namespace std;
int arrsum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 5, 6, 3, 2, 4, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    cout << "The sum of arr is " << arrsum(arr, size) << endl;
    return 0;
}