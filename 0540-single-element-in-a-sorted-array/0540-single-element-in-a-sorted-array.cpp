class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // unordered_map<int , int> m;

        // for (int i = 0; i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        // }
        // for( auto it : m)
        // {
        //     if(it.second == 1)
        //     {
        //         return it.first;
        //     }
        // }
        // return -1;


        int i = 0;
        int j = nums.size() -1;

        while(i<j)
        {
            int mid = i + (j-i)/2 ;

            if(mid%2 == 1)
            {
                mid--;
            }
            if(nums[mid]==nums[mid+1])
            {
                i = mid+2;
            }
            else{
                j = mid;
            }
            
        }
        return nums[j];
    }
};