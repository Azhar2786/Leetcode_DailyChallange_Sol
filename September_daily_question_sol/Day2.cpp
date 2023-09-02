class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        set<string>st;
        int n = s.length();
        for(auto word : dictionary){
            st.insert(word);
        }
        vector<int>ans(n+1);
        for(int i=1; i<=n; i++){
            ans[i] = ans[i-1]+1;
            for(int j=i; j>=1; j--){
                string sub = s.substr(j-1,i-j+1);
                if(st.count(sub)){
                    ans[i] = min(ans[i],ans[j-1]);
                }
            }
        }
        return ans[n];
    }
};