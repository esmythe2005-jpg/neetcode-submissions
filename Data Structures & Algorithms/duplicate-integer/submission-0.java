class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> duplicateSet = new HashSet<>();

        for (int i = 0; i < nums.length; i++) {
            if (!duplicateSet.contains(nums[i])) {
                duplicateSet.add(nums[i]);
            }
        }

        if (duplicateSet.size() < nums.length) {
            return true;
        }
        else {
            return false;
        }

    }
}