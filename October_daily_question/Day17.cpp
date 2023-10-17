//! 1361. Validate Binary Tree Nodes



class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int, int>childToPar;
        vector<int>adj[n];
        for(int i=0; i<n; i++){
            int lC=leftChild[i];
            int rC=rightChild[i];
            if(lC!=-1){
                if(childToPar.find(lC)!=childToPar.end()) return 0;
                adj[i].push_back(lC);
                childToPar[lC]=i;
            }
            if(rC!=-1){
                if(childToPar.find(rC)!=childToPar.end()) return 0;
                adj[i].push_back(rC);
                childToPar[rC]=i;
            }
        }
        int root=-1;
        for(int i=0; i<n; i++){
            if(childToPar.find(i)==childToPar.end()){
                if(root!=-1) return 0;
                root=i;
            }
        }
        if(root==-1) return 0;

        queue<int>q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            for(auto &it:adj[node]){
                q.push(it);
            }
        }
        return cnt==n;
    }
};