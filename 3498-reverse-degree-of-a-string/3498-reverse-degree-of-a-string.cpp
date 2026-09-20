class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;

        for(int i =0 ; i<s.length();i++)
        {
            int re = 26 - (s[i]-'a');
            int ps = i+1;

            ans  = ans +(re*ps);
        }

        return ans;
    }
};