class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int , int> m;

        for (int i = 0; i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        vector<pair<int,int>>v;
        for (auto it : m){
            v.push_back({it.second , it.first});
        }

        for( auto it : v)
        {
            if(it.first == 1)
            {
                return it.second;
            }
        }
        return -1;
    }
};