//how many steps need to go at number N.

#include<iostream>
using namespace std;

int steps(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n<0){
        return 0;
    }

    return steps(n-1)+steps(n-2)+steps(n-3);
}

int main(){

int n;
cin>>n;

cout<<steps(n);

    return 0;
}
//using recurtion