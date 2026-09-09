class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        for (long long power = 1000 , commas = 1; power<=n; power = power*1000, commas++)
            {
                long long end = min(n,power * 1000 - 1);

                ans+= (end - power + 1) * commas;
            }

        return ans;  
    }
};