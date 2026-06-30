class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        string ans="";

        while(i<n)
        {
            string word = "";

            while(i<n && s[i] != ' ')
            {
                word+=s[i++];

            }

            reverse(word.begin(),word.end());

            ans += word;

            if(i<n)
            {
                ans+=' ';
                i++;
            }
        }
        return ans;
    }
};