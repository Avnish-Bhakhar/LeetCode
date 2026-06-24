class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;

        while(i<=j)
        {
            int mid = i + ((j-i)/2);

            if(nums[mid] == target)
            {
                int left = mid;
                int right = mid;

            for(int k = mid; k >= 0; k--)
            {
                if(nums[k] == target)
                left = k;
            else
                break;
            }

            for(int k = mid; k < nums.size(); k++)
            {
                if(nums[k] == target)
                    right = k;
                else
                break;
            }

            return {left, right};
            }
            else if(nums[mid] < target)
            {
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        return {-1,-1};
    }
};