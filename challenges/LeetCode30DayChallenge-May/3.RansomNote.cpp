bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(mp.count(ransomNote[i])>0){
                if(mp[ransomNote[i]]!=0){
                    mp[ransomNote[i]]--;
                }
                else{
                    return false;
                }
                //mp[ransomNote]--;
            }
            else{
                return false;
            }
        }
        return true;
    }