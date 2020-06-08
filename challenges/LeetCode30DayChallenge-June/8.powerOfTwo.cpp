 bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        n=n-1;
        while(n){
           // cout<<n<<" "<<(n&1)<<endl;
            if((n&1)==0){
                return false;
            }
            n = n>>1;
        }
        return true;
        
    }