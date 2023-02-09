class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char> hch(jewels.begin(), jewels.end());
        for(auto i:stones){
            count += hch.count(i);
        }
        return count;
    }
};