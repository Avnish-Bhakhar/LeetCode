class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;

        for (auto i : s)
        {
            freq[i]++;
        }

        vector<pair<int,char>>v;
        for (auto it : freq){
            v.push_back({it.second , it.first});
        }

        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        string ans ;
        
        for (auto it : v)
        {
            while(it.first--)
            {
                ans+=it.second;
            }
        }

        return ans;

    }
};