class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int x = *max_element(candies.begin(), candies.end());
        for(int i : candies){
            int temp = i + extraCandies;
            if( temp >= x){
                res.emplace_back(true);
            }else{
                res.emplace_back(false);
            }
        }
        return res;
    }
};