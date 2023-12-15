//! 1436. Destination City




class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>st;

        for(auto it: paths){
            st.insert(it[1]);
        }

        for(auto it: paths){
            if(st.find(it[0])!=st.end())
                st.erase(it[0]);
        }

        string res= *st.begin();
        return res;
    }
};