class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        do {
            int mid = left + (right - left)/2;
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
            } else {
                right = mid;
            }
        } while (left < right - 1);
        return -1;
    }
};
