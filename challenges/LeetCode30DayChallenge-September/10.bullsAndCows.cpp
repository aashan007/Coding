class Solution {
public:
    string getHint(string secret, string guess) {
        string result ="";
        int bulls = 0;
        int cows=0;
        unordered_map<char,int> mp;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
            else{
                mp[secret[i]]++;
            }
        }
        for(int i=0;i<secret.size();i++){
            if(secret[i]!=guess[i]){
                if(mp[guess[i]]>0){
                    cows++;
                    mp[guess[i]]--;
                }
            }
        }
        result = to_string(bulls) + "A"+to_string(cows)+"B";
        return result;
    }
};