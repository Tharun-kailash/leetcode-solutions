class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,s=nums.size();
        for(i=0;i<s;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};