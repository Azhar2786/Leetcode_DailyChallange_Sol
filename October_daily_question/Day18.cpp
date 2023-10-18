//! 2050. Parallel Courses III



class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> adj[n+1];
        vector<int> indegree(n+1, 0);
        vector<int> maxTime(n+1, 0);

         for(auto& it : relations){
            adj[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }

        queue<int> q;

        for (int i = 1; i <= n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
            maxTime[i] = time[i-1];
        }

        while (!q.empty()) {
            int size = q.size();
            int node = q.front();
            q.pop();

            for (auto& neighbor : adj[node]) {
                maxTime[neighbor] = max(maxTime[neighbor], maxTime[node] + time[neighbor-1]);
                indegree[neighbor]--;

                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
            
        }

        int ans = 0;

        for (int node = 0; node <= n; node++) {
            ans = max(ans, maxTime[node]);
        }

        return ans;
    }
};