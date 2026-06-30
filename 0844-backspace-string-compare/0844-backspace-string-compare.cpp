class Solution {
public:
    string build(string str)
    {
        stack<char>st;

        for(char ch : str)
        {
            if(ch == '#')
            {
                if(!st.empty()) st.pop();
            }else{
                st.push(ch);
            }
        }

        string ans ="";
        
        // stack to string

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        //Reversing the string beacause stack is LIFO
        reverse(ans.begin(),ans.end());

        return ans;
    }
    bool backspaceCompare(string s, string t) {
        return build(s)== build(t);
    }
};