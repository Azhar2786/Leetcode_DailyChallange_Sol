// ! 844. Backspace String Compare



class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st,ts;
        for(int i=0; i<s.length(); i++){
            if(!st.empty() && s[i] == '#'){
                st.pop();
            }else if(s[i] != '#'){ 
                st.push(s[i]);
            }
        }
        for(int i=0; i<t.length(); i++){
            if(!ts.empty() && t[i] == '#'){
                ts.pop();
            }else if(t[i] != '#'){
                ts.push(t[i]);
            }
        }
        string s1,t2;
        while(!st.empty()){
            s1 += st.top();
            st.pop();
        }
        while(!ts.empty()){
            t2 += ts.top();
            ts.pop();
        }
        cout<<s1<<"cdd"<<t2;
        return s1 == t2;
    }
};