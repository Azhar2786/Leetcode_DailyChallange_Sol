// ! 34. Find First and Last Position of Element in Sorted Array


class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool left) {
        int lo = 0;
        int hi = nums.size() - 1;
        int index = -1;
        while(lo <= hi) {
            int mid = (lo + hi)/2;
            if (nums[mid] == target) {
                index = mid;
                if (left == true) {
                    hi = mid - 1;
                } else {            
                    lo = mid + 1;
                }
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else if (nums[mid] > target) {
                hi = mid - 1;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int leftMost = binarySearch(nums, target, true);
        int rightMost = binarySearch(nums, target, false);

        if (leftMost <= rightMost) {
            return {leftMost, rightMost};
        } else {
            return {-1, -1};
        }
    }
};