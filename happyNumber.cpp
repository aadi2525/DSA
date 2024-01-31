//EX:-// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1      its a happy number


#include<iostream>
using namespace std;

int solve(int n){
   int sum=0;     //sum
   while(n!=0){       
   int x=n%10;  ///it gives last number
   sum+=x*x;  
  n=n/10;  //it cuts the last digit.
   }

   return sum;
}

bool check(int n){
    if(n==1){
        return true;
    }else if(n==4){
        return false;
    }else{
        return check(solve(n));
    }
}

int main(){

    int n =7;
solve(n);
   cout<< check(n);
   if(check(n)==true){
    cout<<" true"<<endl;
   }else{
    cout<<" false"<<endl;

   }

    return 0;
}