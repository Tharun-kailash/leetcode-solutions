class Solution {
public:
    bool isPalindrome(string s) {
     string newstr, revstr;
     int i;
     for(i=0;i<s.size();i++){
         if(('a' <= s[i] and s[i] <= 'z') or ('A' <= s[i] and s[i] <= 'Z') or ('0' <= s[i] and s[i] <= '9')){
             newstr+=tolower(s[i]);
         }
     }
     revstr=newstr;
     reverse(revstr.begin(),revstr.end());
     return revstr==newstr;
        
    }
};