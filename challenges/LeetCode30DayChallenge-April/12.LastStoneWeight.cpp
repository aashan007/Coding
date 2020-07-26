int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int val=stones[stones.size()-1];
            int val2=stones[stones.size()-2];
            int temp=abs(val-val2);
            for(int i=0;i<stones.size();i++){
                cout<<stones[i]<<" ";
            }
            cout<<endl;
            stones.pop_back();
            stones.pop_back();
            if(temp!=0){
                stones.push_back(temp);
            }
            for(int i=0;i<stones.size();i++){
                cout<<stones[i]<<" ";
            }
            cout<<endl;
            
        }
        if(stones.size()==1){
            return stones[0];
        }
        else{
            return 0;
        }
        
        
        
    }