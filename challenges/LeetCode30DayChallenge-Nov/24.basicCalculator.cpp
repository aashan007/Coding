class Solution
{
public:
    int calculate(string s)
    {
        //quick check for null string
        if (s.length() == 0)
            return 0;

        int prevNum = 0;
        int currNum = 0;
        char prevSign = '+';
        int ans = 0;

        //get rid of all white space in string s
        s = getThatOuttaHere(s);

        for (int i = 0; i < s.length(); i++)
        {
            //adding digits to operand
            if (isdigit(s[i]))
            {
                currNum = currNum * 10 + (s[i] - '0');
            }

            //must be an if and not an else, in order not to skip the very last operation
            if (!isdigit(s[i]) || i == s.length() - 1)
            {
                //in the case of + or - operators,  previous operand is added to answer, current operand becomes previous
                if (prevSign == '+')
                {
                    ans = ans + prevNum;
                    prevNum = currNum;
                }
                else if (prevSign == '-')
                {
                    ans = ans + prevNum;
                    prevNum = -currNum;
                }
                //in the case of * or /, previous operand is previous operand * or / current operand respectively
                else if (prevSign == '*')
                    prevNum = prevNum * currNum;
                else if (prevSign == '/')
                    prevNum = prevNum / currNum;
                //set the operator as the current char
                prevSign = s[i];
                //reset the current operand as the operation is over
                currNum = 0;
            }
        }
        //add the last number
        ans = ans + prevNum;
        return ans;
    }

    string getThatOuttaHere(string inHere)
    {
        inHere.erase(std::remove(inHere.begin(), inHere.end(), ' '), inHere.end());
        return inHere;
    }
};