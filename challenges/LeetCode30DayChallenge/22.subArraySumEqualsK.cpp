int subarraySum(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,vector<int>> mp;
        int * sum=new int[nums.size()];
        sum[0]=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                sum[i]=nums[i];
                mp[sum[i]].push_back(i);
            }
            else{
                sum[i]=sum[i-1]+nums[i];
                mp[sum[i]].push_back(i);
            }
            
        }
       // cout<<"MP"<<" "<<k<<" "<<mp[k].size()<<endl;
        if(mp[k].size()>0){
             count = count + mp[k].size();
        }
        for(int i=1;i<nums.size();i++){
            int temp = sum[i] - k;
        //    cout<<temp<<" "<<sum[i]<<" "<<k<<" "<<mp[temp].size()<<endl;
            if(mp[temp].size()>0){
                vector <int> s = mp[temp];
                for(int j=0;j<s.size();j++){
                    cout<<s[j]<<endl;
                    if(s[j]<i){
                  //      cout<<"test"<<endl;
                        count++;
                    }
                   
                }
            }
        }

        return count;
        
        
    }