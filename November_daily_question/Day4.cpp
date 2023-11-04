
//!  1503. Last Moment Before All Ants Fall Out of a Plank



class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lastStep = 0;
        for(auto l: left)
            lastStep = max(l, lastStep);
        
        for(auto r: right)
            lastStep = max(lastStep, n-r);
        
        return lastStep;
    }
};