class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size()!=B.size()){
            return false;
        }
        if(A==B){
            unordered_map<char,int> mp;
            for (char c:A){
                mp[c]++;
            }
            if(mp.size()<A.size()){
                return true;
            }
            return false;
        }
        vector<int> arr;
        for(int i=0;i<A.size();i++){
            if(A[i]!=B[i]){
                arr.push_back(i);
            }
        }
        
        if(arr.size() ==2 && A[arr[0]] == B[arr[1]] && B[arr[0]] == A[arr[1]]){
            return true;
        }
        else{
            return false;
        }
    }
};