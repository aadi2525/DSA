//    26. Remove Duplicates from Sorted Array
   
   
   class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1;i<nums.size();i++){
                  if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
          
        }
        return k;
    }
};




// 27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for (int i=0;i<nums.size();i++){
            if(val!=nums[i]){
                nums[k] = nums[i];
                k++;
            }
        }
            return k;

    }
};

// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int k = 1;
    int ocurace =1;

    for(int i = 1;i<nums.size();i++){
        if(nums[i] == nums[i-1]){
            ocurace++;
        }else{
            ocurace =1;
        }

        if(ocurace<=2){
            nums[k] = nums[i];
            k++;
        }
    }
        return k;
    
    }
    
};

// 189. Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // vector<int> temp(nums.size());
        // for(int i=0;i<nums.size();i++){
        //     temp[(i+k)%nums.size()] = nums[i];
        // }
        //  nums = temp ;

        
         k = k%nums.size();
        int l= 0,r=nums.size()-1; 

        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        l=0,r = k-1;
         while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        l=k,r =nums.size()-1;
         while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }


    }
};


