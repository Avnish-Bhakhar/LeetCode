class Solution {
public:
    int countCommas(int n) {
        int ans = 0;

        if(n >= 1000)
        {
            for(int power = 1000 ; power <= n ; power *=1000)
            {
                int end = min(n,power*1000-1);

                ans = (end - power + 1)*1;
            }
        }

        return ans;
    }
};