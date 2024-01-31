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