class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum = 0 , rsum = 0, maxsum = 0;
        int n = nums.size();
        
        // taking out first k card from left
        for(int i = 0; i < k; i++) 
        {
            lsum = lsum + nums[i];
        }
        
        maxsum = lsum;
        int rindex = n-1;
        
        // removing from left and adding from right
        for(int i = k-1; i >= 0; i--){
            lsum = lsum - nums[i];
            rsum = rsum + nums[rindex];
            rindex = rindex - 1;
            maxsum = max(maxsum,lsum + rsum);
        }
        return maxsum;
    }
};