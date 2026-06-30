class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        // Case 1 : Strings already equal
        if (s == goal) {
            unordered_set<char> st;

            for (char c : s) {
                if (st.count(c))
                    return true;   // duplicate character found
                st.insert(c);
            }

            return false;
        }

        // Case 2 : Find mismatched positions
        vector<int> diff;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i])
                diff.push_back(i);
        }

        // Exactly two mismatches should exist
        if (diff.size() != 2)
            return false;

        return s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};