class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int i,sum=0;
       unordered_map<int,int> hmpgud;
        for(auto i:nums){
            hmpgud[i]++;
        }
        for(auto i: hmpgud){
            sum += i.second * (i.second - 1) / 2;
        }
        return sum;
    }
};