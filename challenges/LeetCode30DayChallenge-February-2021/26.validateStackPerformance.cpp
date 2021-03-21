class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> st;
        int i = 0;
        int j = 0;
        while (i < pushed.size() && j < popped.size())
        {
            if (st.empty())
            {
                //         cout<<"Empty"<<" "<<pushed[i]<<endl;
                st.push(pushed[i]);
                i++;
            }
            else
            {
                if (st.top() == popped[j])
                {
                    //           cout<<st.top()<<" "<<popped[j]<<endl;
                    st.pop();
                    j++;
                }
                else
                {
                    //         cout<<"Not empty "<<pushed[i]<<endl;
                    st.push(pushed[i]);
                    i++;
                }
            }
        }

        while (!st.empty() && j < popped.size())
        {
            if (st.top() == popped[j])
            {
                st.pop();
                j++;
            }
            else
            {
                return false;
            }
        }

        if (st.empty())
        {
            return true;
        }
        return false;
    }
};