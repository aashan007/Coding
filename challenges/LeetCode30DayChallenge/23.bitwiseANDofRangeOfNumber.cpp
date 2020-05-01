int countDigits(int m){
        if(m==0){
            return 0;
        }
        int count = -1;
        int k=1;
        while(k<=m && k>=1){
            k=k<<1;
            count++;
        }
        return count;
    }
    int rangeBitwiseAnd(int m, int n) {
        if(m<=0){
            return 0;
        }
        
        int result=0;
        int res1=countDigits(m);
 //       cout<<n<<endl;
       int res2=countDigits(n);
        
       cout<<m<<" "<<n<<" "<<res1<<" "<<res2<<endl;
        if(res1 == res2){
            int val = pow(2,res1);
            result = result + val + rangeBitwiseAnd(m-val,n-val);
        }
        else{
            return result;
        }

 //       cout<<res1;
        return result;
    }