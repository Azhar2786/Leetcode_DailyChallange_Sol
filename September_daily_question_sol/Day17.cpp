//!    847. Shortest Path Visiting All Nodes


class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size();
        if(n==1) return 0;
        set<pair<int,int>>vis;
        queue<pair<int,pair<int,int>>>q;
        int all=(1<<n)-1;
        for(int i=0;i<n;i++){
            int mask=1<<i;
            q.push({i,{0,mask}});
            vis.insert({i,mask});
        }
        while(!q.empty()){
            int node=q.front().first;
            int dist=q.front().second.first;
            int mask=q.front().second.second;
            q.pop();
            for(auto it:graph[node]){
                int newMask=(mask|(1<<it));
                if(newMask==all)
                    return dist+1;
                else if(vis.count({it,newMask}))
                    continue;
                q.push({it,{dist+1,newMask}});
                vis.insert({it,newMask});
            }
        }
        return 0;
    }
};