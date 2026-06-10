class Solution {
    public int[] twoSum(int[] nums, int target) {

        HashMap<Integer, Integer> hashMap = new HashMap<>();
        int val1 = 0;
        int val2 = 0;

        for (int i = 0; i < nums.length; i++) {
            if (hashMap.containsKey(nums[i])) {
                val1 = hashMap.get(nums[i]);
                val2 = i;
            }
            hashMap.put(target - nums[i], i);
        }

        return new int[] {val1, val2};
    }
}
