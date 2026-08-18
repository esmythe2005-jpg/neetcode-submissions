class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = left + (right - left)/2;

        do {
            if (target == nums[right]) {
                return right;
            }
            else if (target == nums[left]) {
                return left;
            }
            else if (target == nums[mid]) {
                return mid;
            }
            else if (target > nums[mid]) {
                left = mid;
                mid = left + (right - left)/2;
            } else {
                right = mid;
                mid = left + (right - left)/2;
            }
        } while (left < right - 1);
        return -1;
    }
};
