//! 1356. Sort Integers by The Number of 1 Bits


int count(int n){
    int ans=0;
    for(int i=0;i<31;i++){
        if(n&(1<<i)){
            ans++;
        }
    }
    return ans;
}

bool cmp(int n1,int n2){
    int t1=count(n1),t2=count(n2);
    if(t1 < t2){
        return true;
    }else if(t1 > t2){
        return false;
    }else{
        return n1<n2;
    }
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        return arr;
    }
};