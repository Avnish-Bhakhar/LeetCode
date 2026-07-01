class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high = 0;

        int peak = 0;

        for(auto i : gain)
        {
            high+=i;
            peak= max(peak,high);
        }
        return peak;
    }
};