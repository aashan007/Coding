class Solution
{
public:
    string findLongestWord(string s, vector<string> &d)
    {

        string ret_str("");

        if (s.compare("") != 0)
        {
            for (int i_d = 0; i_d < d.size(); ++i_d)
            {
                string cmp_str(d[i_d]); // Loading each dict string for comparision
                int i_cmp, i_s;         // Pointers for currently reading character of strings cmp_str & s
                for (i_cmp = 0, i_s = 0; (i_cmp < cmp_str.length()) && (i_s < s.length()); ++i_s)
                    if (s[i_s] == cmp_str[i_cmp]) // i_cmp moves ahead only if same char found at i_s pointer
                        ++i_cmp;

                if (i_cmp == cmp_str.length() &&  // Check for complete presence of dict string
                    ((ret_str.length() == 0)      // Handling ret_str empty case
                     || (i_cmp > ret_str.length() // Check for larger length/lower lexicographical order of cmp_str string
                         || (i_cmp == ret_str.length() && cmp_str.compare(ret_str) < 0))))
                    ret_str = cmp_str;
            }
        }

        return ret_str;
    }
};