class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n = nums.length;
        int i=0;
        int maxcount = 0;
        int curr = 0;
        while(i<n){
            if(maxcount == 0 ){
                if(nums[i]==1){
                    curr++;
                    maxcount = curr;
                    i++;
                    continue;
                }
            }
            if(nums[i]==1){
                curr++;
                if(maxcount < curr){
                    maxcount = curr;
                }
                i++;
                continue;
            }
            if(nums[i]==0){
                curr = 0;
            }
            i++;
        }
        return maxcount;
    }
}