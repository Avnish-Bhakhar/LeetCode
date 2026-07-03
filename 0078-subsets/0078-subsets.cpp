class Solution {
public:
vector<vector<int>>ans;
void solve(int index,vector<int> nums, vector<int>subsets){
    if(index==nums.size())
    {
        ans.push_back(subsets);
        return;
    }
    subsets.push_back(nums[index]);
    solve(index+1,nums,subsets);

    subsets.pop_back();
    solve(index+1,nums,subsets);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subsets;
        solve(0,nums,subsets);
        return ans;
    }
};