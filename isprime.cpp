#include <iostream>
using namespace std;

int main()
{
    cout << "Input the number : " << endl;
    int num, count = 0;
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
           count++;
        }
       
    }
    if(count != 0){
        cout<<"Given number is not prime"<<endl;
    }
    else{
        cout<<"Given number is prime";
    }

    return 0;
}