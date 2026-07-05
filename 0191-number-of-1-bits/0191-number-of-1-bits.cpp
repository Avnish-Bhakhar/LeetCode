class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while(n>0)

        //Hamming Weight algorithm

        // {
        //     count += (n&1);
        //     n >>=1;

        // }

        //Brian kerinigham Algorithm

        {
            n = n&(n-1);
            count++;
        }
        
        return count;
    }
};