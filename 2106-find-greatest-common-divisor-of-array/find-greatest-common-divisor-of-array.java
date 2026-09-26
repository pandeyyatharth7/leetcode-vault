class Solution {
    public int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    public int findGCD(int[] nums) {
        int n = nums.length;
        int max = nums[1];
        int min = nums[1];
        for(int i=0; i<n ;i++){
            if(nums[i]>max){
                max = nums[i];
            }
            if(nums[i]<min){
                min = nums[i];
            }
        }
        int result = gcd(min, max);
        return result;
    }
}