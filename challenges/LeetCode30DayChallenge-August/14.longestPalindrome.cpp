class Solution {
public:
    int longestPalindrome(string s) {
        int count =0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        unordered_map<char,int>::iterator it;
        for(it= mp.begin();it!=mp.end();++it ){
            if(it->second%2==0){
                count+=it->second;
            }
            else{
                if(it->second>2)
                count+=(it->second)-1;
            }
        }
     //   cout<<count<<" "<<s.size();
        if(count!=s.size()){
            count=count+1;
        }
        
        return count;
        
    }
};