
//! 1657. Determine if Two Strings Are Close






class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>word1_freq(26,0);
        vector<int>word2_freq(26,0);
        vector<bool>word1_present(26,false);
        vector<bool>word2_present(26,false);

        for(char ch: word1){
            word1_freq[ch-'a']++;
            word1_present[ch-'a'] = true;
        }

        for(char ch: word2){
            word2_freq[ch-'a']++;
            word2_present[ch-'a'] = true;
        }

        sort(begin(word1_freq), end(word1_freq));
        sort(begin(word2_freq), end(word2_freq));

        return word1_freq == word2_freq && word1_present == word2_present;
    }
};