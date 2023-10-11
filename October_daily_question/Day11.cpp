//! 2251. Number of Flowers in Full Bloom


class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n = flowers.size();
        vector<int> start(n);
        vector<int> end(n);
        for(int i = 0; i < n; i++) {
            start[i] = flowers[i][0];
            end[i] = flowers[i][1] + 1;
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        vector<int> ans(people.size());
        int e;
        int s;
        for(int i = 0; i < people.size(); i++) {
            e = binarySearch(end, people[i]);
            s = binarySearch(start, people[i]);
            ans[i] = s - e;
        }
        return ans;
    }
    
    int binarySearch(vector<int>& A, int target) {
        int l = 0;
        int r = A.size();
        int mid;
        while(l < r) {
            mid = (l + r) / 2;
            if(target < A[mid]) r = mid;
            else l = mid + 1;
        }
        return l;
    }
};