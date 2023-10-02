
//! 2038. Remove Colored Pieces if Both Neighbors are the Same Color


class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int winner1 = 0,winner2=0;
        for(int i = 1;i<n-1;i++)
        {
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A')
            {
                winner1++;
            }else if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B')
            {
                winner2++;
            }
        }
        return winner1>winner2;
    }
};