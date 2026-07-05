class Solution {
public:
    int reverse(int x) {
        int org = x;

        long long ans = 0;

        while(x!=0)
        {
            int ld = x%10;
            ans = ld  + (ans*10);

            x/=10;
        }

        if(ans > INT_MAX || ans < INT_MIN) return 0;
        return ans;
    }
};