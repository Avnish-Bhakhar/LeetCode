class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            // Naya subarray start kare ya purane ko continue kare
            currentSum = max(nums[i], currentSum + nums[i]);

            // Maximum sum update karo
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};