class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i,j;
        for(i=1,j=1;i<nums.size();i++){
            if(nums[j - 1]<nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};