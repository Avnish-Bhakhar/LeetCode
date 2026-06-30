class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;

        for  (char i : word)
        {
            if(i >= 'A' && i <= 'Z')
            {
                cnt++;
            }
        }

        if(cnt == word.size() || cnt == 0)
        {
            return true;
        }
        if(cnt == 1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};