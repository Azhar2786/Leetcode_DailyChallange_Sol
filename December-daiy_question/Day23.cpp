
1496. Path Crossing



class Solution {
public:
    bool isPathCrossing(string path) {
        int k=0,j=0;
        set<pair<int,int>> s;
        s.insert({0,0});
       for(int i=0;i<path.size();i++){
           if(path[i]=='N') j++;
           else if(path[i]=='S') j--;
           else if(path[i]=='E') k++;
           else  k--;
           if(s.count({k,j})) return true;
           else s.insert({k,j});
       } 
       return false;
    }
};