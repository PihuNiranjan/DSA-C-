#include <iostream>
using namespace std;
/*
A
BB
CCC
*/
int main(){
    for(int i =1; i<=3;i++){
char ch ='A';
for(int j =1;j<=i;j++){
    
    cout<<char(ch+i-1);
}
cout<<"\n";
    }
return 0;
}