class Solution {
public:
    const int MOD = 1e9+7;
    int numSub(string s) {
        int n = s.length();
        long long cnt = 0, res = 0;

        for (int i = 0 ; i < n ; i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }else{
                res = (res + cnt *(cnt + 1)/2) % MOD;
                cnt = 0 ;
            }
        }
        res = (res + cnt *(cnt +1 )/2) %MOD;
        return res;  
    }
};