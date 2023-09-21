//! 4. Median of to orted array


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int len1 =nums1.size();
       int len2 =nums2.size();

        vector<int> ans;
       int i=0;
       int j=0;
       while(i<len1 && j<len2){
           if(nums1[i]< nums2[j]){
               ans.push_back(nums1[i]);
               i++;
           }else{
               ans.push_back(nums2[j]);
               j++;
           }
       }
       while(i<len1){
            ans.push_back(nums1[i]);
             i++;
       } 
        while(j<len2){
            ans.push_back(nums2[j]);
            j++;
       }  
       int count = ans.size(); 
        int n= ans.size();
        int start =0;
        int  end = n-1;
        int mid =start + (end -start)/2;
        if (count%2==1){
            
            return ans[mid];
        }
       
        else{
           float sum = (float)((ans[mid])+(ans[mid+1]))/2 ;
            return sum; 
        }
       
     return {};
    }
};