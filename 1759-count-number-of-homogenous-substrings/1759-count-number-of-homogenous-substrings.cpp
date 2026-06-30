class Solution {
public:
    int countHomogenous(string s) {
        const int MOD = 1e9+7;
        int n = s.length();
        char ch = s[0];

        int cnt= 1 ; int res = 0;

        for (int i = 1; i< n ; i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
            }
            else
            {
                long long temp = 1LL * cnt *(cnt+1)/2;
                res = (res+temp)%MOD;
                cnt = 1;
            }
        }
        long long temp = 1LL*cnt*(cnt+1)/2;
        res = (res + temp)%MOD;
        return res;
    }
};