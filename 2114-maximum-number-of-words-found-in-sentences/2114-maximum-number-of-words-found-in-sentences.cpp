class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(auto& i:sentences){ //goes through each sentence
            int count = 0;
            for(auto& j:i){ //goes thourgh each char in sentence
                if(j==' ') count++;
            }
            ans = max(ans, count);
        }
        return ans+1;
    }
};