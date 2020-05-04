int findComplement(int num) {
        long count=0;
        long temp = num;
        while(temp>0){
            count++;
            temp=temp>>1;
        }
        
        unsigned int t = (1<<count);
        cout<<t-1;
       // long long result = res^num;
        return (t-1)^num;
        
    }