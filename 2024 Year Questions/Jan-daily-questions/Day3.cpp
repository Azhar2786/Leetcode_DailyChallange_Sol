//! 2125. Number of Laser Beams in a Bank


class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>deviceCount;
        for(auto it:bank)
        {
            int one=0;
            for(auto i:it)
            {
                if(i=='1') one++;
            }
            if(one)
                deviceCount.push_back(one);
        }
        if(deviceCount.size()==1) return 0;
        int res = 0;
        for(int i=1;i<deviceCount.size();i++)
        {
            res += deviceCount[i]*deviceCount[i-1];
        }
        return res;

    }
};