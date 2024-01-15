//! 2225. Find Players With Zero or One Losses





class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>lostCount(100001, -1);

        for(auto match: matches){
            int pWin = match[0], pLoss = match[1];
            if(lostCount[pWin] == -1){
                lostCount[pWin] = 0;
            }
            if(lostCount[pLoss] == -1){
                lostCount[pLoss] = 1;
            }else{
                lostCount[pLoss]++;
            }
        }

        vector<int> winners, losers;
        for(int i = 1; i < 100001; i++){
            if(lostCount[i] == 0){
                winners.push_back(i);
            } else if(lostCount[i] == 1){
                losers.push_back(i);
            }
        }

        return {winners, losers};
    }
};