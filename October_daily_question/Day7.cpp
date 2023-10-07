//!  1420. Build Array Where You Can Find The Maximum Exactly K Comparisons


class Solution {
public:
int mod=1e9+7;
int check[51][51][101];
int N,M,K;
int help(int ind,int cost,int max_val)
{
    if(ind==N)
    {
        if(cost==K){
        return 1;
        }
        return 0;
    } 
     if(check[ind][cost][max_val]!=-1){
            return check[ind][cost][max_val];
     }
         int result=0;
     for(int i=1;i<=M;i++)
        {
            if(i>max_val)
            {
                result=(result+help(ind+1,cost+1,i))%mod;
            }
            else
            {
                result=(result+help(ind+1,cost,max_val))%mod;
            }
        }
        check[ind][cost][max_val]=result%mod;
        return result%mod;
}
    int numOfArrays(int n, int m, int k) {
       N=n;M=m;K=k; 
       memset(check,-1,sizeof(check));
       return help(0,0,0);
    }
};