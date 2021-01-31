class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        int n = s.size();
        int i = 0;

        while (i < n)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size() == 0)
                {
                    //          cout<<"size\n";
                    return false;
                }
                char stTop = st.top();
                st.pop();
                char search;
                if (stTop == '(')
                {
                    search = ')';
                }
                else if (stTop == '[')
                {
                    search = ']';
                }
                else
                {
                    search = '}';
                }
                //     cout<<search<<" "<<s[i]<<" " <<st.size()<<endl;
                if (search != s[i])
                {
                    cout << "search\n"
                         << endl;
                    return false;
                }
            }
            i++;
        }

        if (st.size() != 0)
        {
            //    cout<<"size 2\n"<<endl;
            return false;
        }

        return true;
    }
};