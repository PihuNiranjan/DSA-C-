#include <iostream>
using namespace std;
/*
A
BC
DEF

char +row + col - 2*/
int main(){

char ch = 'A';
for(int row=1;row<=26;row++){
    for(int col = 1;col<=row;col++){
        cout<<" "<<char(ch+row+col-2);
    }
    cout<<"\n";
}
    
return 0;
}