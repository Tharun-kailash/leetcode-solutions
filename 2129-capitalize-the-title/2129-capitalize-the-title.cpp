class Solution {
public:
    string capitalizeTitle(string title) {
       transform(title.begin(), title.end(), title.begin(), ::tolower);
       for(int i=0;i<title.size();i++){
           if(title.size()==1) return title;
           if(i==0 || title[i-1]==' '){
               if(i>=title.size()-2 || title[i+1]==' '|| title[i+2]==' ') continue;
               title[i]=toupper(title[i]);
           }
       }
        return title;
    }
};