
#include<bits/stdc++.h>
using namespace std;


int getFirst(vector<int>& nums,int target){
    int s=0;
    int ans=-1;
    int e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            // return  mid;
        ans=mid;
        e=mid-1; ///search for the first element       LHS side
        }else if(nums[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
}


int getLast(vector<int>& nums,int target){
    int s=0;
    int ans=-1;
    int e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            // return  mid;
        ans=mid;
        s=mid+1; ///search for the last element       RHS side
        }else if(nums[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
}
int search(vector<int>& nums,int target){

vector <int >v (2,-1) ;        //vector of size two and value -1 for both
int first=getFirst(nums,target);
if(first==-1){
    return v;
}
int last=getLast(nums,target);

v[0]=first;
v[1]=last;

return v;
}



int main(){


    return 0;
}