class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int ind=0,sum;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto& i:mat){
            sum=accumulate(i.begin(), i.end(),0);
            pq.push({sum, ind});
            ind += 1;
        }
        vector<int> ans;
        while(k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};