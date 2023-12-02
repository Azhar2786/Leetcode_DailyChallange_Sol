//!  1160. Find Words That Can Be Formed by Characters




class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int countchars[26]={0};
        int sum=0;
        for(auto ch:chars){
            countchars[ch-'a']++;
        }

        for(auto word:words){
            int wordcount[26]={0};

            
            for(auto ch:word){
                wordcount[ch-'a']++;
            }
            bool isvalid=true;
            for (int i = 0; i < 26; ++i) {
                if (wordcount[i] > countchars[i]) {
                    isvalid=false;
                    break;
                }
            }
            if(isvalid){
                sum+=word.length();
            }
        }
        return sum;
    }
};