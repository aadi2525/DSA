#include<iostream>
using namespace std;

int tower(int n){
    if(n==0){
        return 0;
    }

    return (tower(n-1) + 1+tower(n-1));
}


void printSteps(int n,char s,char h,char d){

    if(n==0){
        return;
    }

    printSteps(n-1,s,h,d);
    cout<<" moving Disk "<<n<<" form "<<s<<" to "<< d <<endl;
    printSteps(n-1,h,d,s);
}

int main(){
int n;
cin>>n;
cout<<tower(n)<<endl;

printSteps(n,'A','C','B');

    return 0;
}