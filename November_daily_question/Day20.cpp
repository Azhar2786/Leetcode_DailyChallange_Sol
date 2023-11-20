//!  2391. Minimum Amount of Time to Collect Garbage



class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<char, int>lastOccurence;
        int ans = 0;

        for(int i=0; i<garbage.size(); i++){
            ans += garbage[i].size();

            for(auto c: garbage[i]){
                lastOccurence[c] = i;
            }

        }

        for(int i=1; i<travel.size(); i++){
            travel[i] += travel[i-1];
        }

        for(auto c: "MPG"){
            if(lastOccurence[c] != 0){
                ans += travel[lastOccurence[c] - 1];
            }
        }
        return ans;
    }
};