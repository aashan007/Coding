class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.size() != word2.size())
            return false;
        vector<int> w1(26, 0), w2(26, 0);
        for (char ch : word1)
            w1[ch - 'a']++;
        for (char ch : word2)
            w2[ch - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if ((w1[i] == 0 && w2[i] != 0) || (w1[i] != 0 && w2[i] == 0))
                return false;
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < 26; i++)
        {
            if (w1[i] > 0)
            {
                mp[w1[i]]++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (mp.count(w2[i]) > 0)
            {
                mp[w2[i]]--;
                if (mp[w2[i]] == 0)
                {
                    mp.erase(w2[i]);
                }
            }
        }
        //    cout<<mp.size()<<endl;
        return mp.size() == 0;
    }
};