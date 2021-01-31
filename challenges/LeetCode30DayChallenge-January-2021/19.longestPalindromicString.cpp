class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.size() <= 1)
        {
            return s;
        }

        int left = 0, right = 0;
        int result = 1;
        pair<int, int> pt;

        for (int i = 0; i < s.size() - 1; i++)
        {
            left = i;
            right = i + 1;

            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                left--;
                right++;
            }
            if (result < right - left - 1)
            {
                pt.first = left;
                pt.second = right;
                result = right - left - 1;
            }
            result = max(result, right - left - 1);
        }
        for (int i = 0; i < s.size() - 1; i++)
        {

            left = i;
            right = i;

            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                left--;
                right++;
            }
            if (result < right - left - 1)
            {
                pt.first = left;
                pt.second = right;
                result = right - left - 1;
            }
            result = max(result, right - left - 1);
        }

        //       cout<<result<<" "<<pt.first<<" "<<pt.second<<endl;

        return s.substr(pt.first + 1, result);
    }
};