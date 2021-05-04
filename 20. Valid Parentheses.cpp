class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        bool ans=true;
        
        for(int i=0;i<n;i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{' ){
                st.push(s[i]);
            }
            if(st.empty() && (s[i]==')' or s[i]==']' or s[i]=='}')){
                return false;
            }
            if(!st.empty() and s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
                
                
            }
            if(!st.empty() and s[i]==']'){
                if(st.top()=='['){
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
                
                
            }
            if(!st.empty() and s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else{
                    ans=false;
                    break;
                }
                
                
            }
           
        }
        if(!st.empty()){
            return false;
        }
        
        return ans;
        
    }
};

//https://leetcode.com/problems/valid-parentheses/discuss/728304/C%2B%2B-Easiest-solution-fully-Explained-takes-0ms-beats-100-49

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  //taking stack for keep tracking the order of the brackets..
        for(auto i:s)  //iterate over each and every elements
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);  //if current element of the string will be opening bracket then we will just simply push it into the stack
            else  //if control comes to else part, it means that current element is a closing bracket, so check two conditions  current element matches with top of the stack and the stack must not be empty...
            {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) return false;
                st.pop();  //if control reaches to that line, it means we have got the right pair of brackets, so just pop it.
            }
        }
        return st.empty();  //at last, it may possible that we left something into the stack unpair so return checking stack is empty or not..
    }
};