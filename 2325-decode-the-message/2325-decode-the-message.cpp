class Solution {
public:
    string decodeMessage(string key, string message) {
        int i;
        char c='a';
        unordered_map<char,char> hmp;
        for(i=0;i<key.size();i++){
            if(key[i]==' ' || hmp.find(key[i])!=hmp.end()){
                continue;
            }
            else{
              hmp[key[i]]=c++;
            }
        }
        for(auto& i:message){
            if(i == ' ') continue;
            i=hmp[i];
        }
        return message;
    }
};