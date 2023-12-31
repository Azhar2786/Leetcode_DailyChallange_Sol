1624. Largest Substring Between Two Equal Characters




class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> m;
int ans=-1;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])==m.end()){
                 m[s[i]]=i;
              }else
              {
                  auto p=m.find(s[i]);
                  int x=p->second;
                  ans=max(ans,i-x-1);
              }
        }

        return ans;
    }
};