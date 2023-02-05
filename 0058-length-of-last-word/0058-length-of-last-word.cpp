class Solution {
public:
    int lengthOfLastWord(string s) {
      int n=s.size();
      string newstr;
      for(int i=n-1;i>=0;i--){
          if(newstr.size()==0  && s[i]==' '){
              continue;
          }
          else{
              if(s[i]==' '){
                break;
            }   
            newstr+=s[i];
          } 
      }  
        return newstr.size();
    }
};