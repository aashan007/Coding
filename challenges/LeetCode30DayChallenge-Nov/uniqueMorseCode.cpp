class Solution
{
public:
    string returnMorse(string &word, vector<string> &morse)
    {
        string temp = "";
        for (int i = 0; i < word.size(); i++)
        {
            int ch = word[i] - 'a';
            temp = temp + morse[ch];
        }

        return temp;
    }
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> morse;
        morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        set<string> st;
        for (int i = 0; i < words.size(); i++)
        {
            string temp = returnMorse(words[i], morse);
            st.insert(temp);
        }

        return st.size();
    }
};