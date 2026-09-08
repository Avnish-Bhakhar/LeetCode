class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int g = needle.size();

        for (int i = 0 ; i <= n-g ; i++)
        {
            int j;
            for ( j = 0 ; j<g ; j++)
            {
                if(haystack[i+j] != needle[j])
                {
                    break;
                }
            }
            if(j==g)
            {
                return i;
            }
        }
        return -1;
    }
};