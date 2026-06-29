class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int, int>m;

        // for (int i = 0; i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        // }
        // int ele = INT_MIN;
        // int ans = 0;
        // for (auto i: m)
        // {
        //     if (i.second>ele)
        //     {
        //         ele = i.second;
        //         ans = i.first;
        //     }
        // }
        // return ans;

        int n = nums.size();
        int cnt = 0;
        int maj = NULL;

        for (int i = 0; i<n;i++)
        {
            if(cnt == 0)
            {
                maj = nums[i];
                cnt = 1;
            }
            else if(nums[i]== maj)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        return maj;

    }
};