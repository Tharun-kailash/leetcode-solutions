class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // int i,s=nums.size();
        // for(i=0;i<s;i++){
        //     nums.push_back(nums[i]);
        // }
        // return nums;
        vector<int> newarr(2*nums.size());
        int i;
        for(i=0;i<nums.size();i++){
            newarr[i]=nums[i];
            newarr[i+nums.size()]=nums[i];
        }
        return newarr;
    }
};