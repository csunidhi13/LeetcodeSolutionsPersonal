class Solution {
public:
    bool checkIfPangram(string s) {
        vector<bool> mark(26,false);
        int index;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                index=s[i]-'a';
                mark[index]=true;
            }
            
        }
        for(int i=0;i<26;i++){
            if(mark[i]==false){
                return false;
            }
             
        
        }
        return true;
    }
};