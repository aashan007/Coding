vector<int> countBits(int num) {
        vector<int> res;
        if(num==0){
            res.push_back(0);
            return res;
        }
        res.push_back(0);
        if(num==1){
            res.push_back(1);
            return res;
        }
        res.push_back(1);
        int count=1;
        while(count<=num){
            int k=0;
            int size = res.size();
        //    cout<<size<<" "<<" "<<k<<" "<<res.size()<<" "<<" "<<num<<endl;
            while(k<size && k+size<=num){
                res.push_back(res[k]+1);
                k++;
            }
      //      cout<<size<<" "<<" "<<k<<" "<<res.size()<<" "<<" "<<num<<" "<<count<<endl;
            count=k+size;
            
        }
        
        
        return res;
        
        
    }