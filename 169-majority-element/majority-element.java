class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        n = n/2;
        int count = 0;
        for(int i = 0; i<nums.length;i++){
            if(nums[n] == nums[i]){
                count++;
            }
        }
        if(count>n){
            return nums[n];
        }
        return 0;
    }
}