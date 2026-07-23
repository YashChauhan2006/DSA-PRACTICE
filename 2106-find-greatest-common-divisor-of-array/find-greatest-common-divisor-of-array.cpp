class Solution {
    int gcd(int a , int b){
        while(b != 0){
            int x = b;
            b = a % b;
            a = x;
        }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int minVal = nums[0];
        int maxVal = nums[0];

        for(int num : nums){
            minVal = std::min(minVal , num);
            maxVal = std::max(maxVal , num);

        }
        return gcd(minVal , maxVal);
    }
};