class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // int i,s=nums.size();
        // for(i=0;i<s;i++){
        //     nums.push_back(nums[i]);
        // }
        // return nums;
        int n = nums.size();
        vector<int> newarr(2*n);
        int i;
        for(i=0;i<n;i++){
            newarr[i]=nums[i];
            newarr[i+n]=nums[i];
        }
        return newarr;
    }
};