//?  896. Monotonic Array


class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int n=arr.size();
        bool incr=true,decr=true;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                incr=false;
            }
            if(arr[i]<arr[i-1]){
                decr=false;
            }
            if(!incr && !decr){
               return false; 
            }
        }
        return true;
    }
};