class Solution {
public:
    string toLowerCase(string s) {
        string sn;
        int i=0;
        while(i<s.size()){
            sn+=tolower(s[i]);
            i++;
        }
        return sn;
    }
};