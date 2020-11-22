class Solution
{
public:
    string decodeString(string s)
    {
        string result;
        stack<string> st;
        if (s.size() <= 1)
        {
            return s;
        }
        int num = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ']')
            {
                string res = "";
                while (st.top() != "[")
                {
                    string ch = st.top();
                    st.pop();
                    res = ch + res;
                }
                if (st.top() == "[")
                {
                    st.pop();
                    string temp;
                    string num = st.top();
                    int val = stoi(num);
                    st.pop();
                    for (int i = 0; i < val; i++)
                    {
                        temp = temp + res;
                    }
                    st.push(temp);
                }
            }
            else
            {
                if (s[i] >= 48 && s[i] <= 57)
                {
                    num = num * 10 + (s[i] - 48);
                }
                else
                {
                    if (num)
                    {
                        st.push(to_string(num));
                        num = 0;
                    }
                    string s1(1, s[i]);
                    st.push(s1);
                }
            }
        }

        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }

        //   result = st.top();
        return result;
    }
};