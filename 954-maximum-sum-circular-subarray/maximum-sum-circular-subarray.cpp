class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int n = nums.size();
        
        int max_straight_SUM = INT_MIN;
        int min_straight_SUM = INT_MAX;
        int array_sum = 0;
        int temp_maxSUM = 0;
        int temp_minSUM = 0;

        for(int i = 0; i < n; ++i){
            array_sum += nums[i];
            temp_maxSUM += nums[i];

// I used ternary operator here
            max_straight_SUM = max_straight_SUM < temp_maxSUM ? temp_maxSUM : max_straight_SUM;
            temp_maxSUM = temp_maxSUM < 0 ? 0 : temp_maxSUM;

            temp_minSUM += nums[i];

            min_straight_SUM = min_straight_SUM > temp_minSUM ? temp_minSUM : min_straight_SUM;
            temp_minSUM = temp_minSUM > 0 ? 0 : temp_minSUM;

        }
        if(array_sum == min_straight_SUM){
            return max_straight_SUM;
        }
        return max(max_straight_SUM,(array_sum - min_straight_SUM));       
    }
};