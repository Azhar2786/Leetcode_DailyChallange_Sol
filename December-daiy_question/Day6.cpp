1716. Calculate Money in Leetcode Bank




class Solution {
public:
    int totalMoney(int n) {
      int ans=0;
      int money=1;
      //for weeks 
      while(n>=1){
          // for days
          for(int i=0;i<min(n,7);i++)
          {
              ans+=money+i;
          }
          n-=7;
          money++;
      }  
      return ans;
    }
};