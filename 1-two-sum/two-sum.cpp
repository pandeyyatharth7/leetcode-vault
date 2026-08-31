class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        for(int i=0;i<nums.size();i++){
            int temp = target;
            temp -= nums[i];
            for (int j=i+1;j<nums.size();j++){
                if((temp-nums[j]) == 0){
                    res[0]=i;
                    res[1] = j;
                    break;
                }
            }
    }
    return res;
    }
};