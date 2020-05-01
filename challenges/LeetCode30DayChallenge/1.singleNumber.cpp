int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        unordered_map<int,int>::iterator it;
        it=mp.begin();
        int res;
        for(;it!=mp.end();it++){
            if(it->second == 1){
                res= it->first;
                break;
            }
        }
        return res;
        
    }

    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> nums;
            for(int i=0;i<n;i++){
                int temp;
                cin>>temp;
                nums.push_back(temp);
            }
            return singleNumber(nums);
        }
    }