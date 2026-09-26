class Solution {
    public int maxProduct(int[] nums) {
        int max = 1;
        int min = 1;
        int result = nums[0];

        for(int k : nums){
            if(k<0){
                int temp = max;
                max = min;
                min = temp;
            }
            max = Math.max(k, max*k);
            min = Math.min(k, min*k);

            result = Math.max(result, max);
        }
        return result;
    }
}