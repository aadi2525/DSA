#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    cout<<large;


    return 0;
}