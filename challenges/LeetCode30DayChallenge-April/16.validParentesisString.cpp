bool checkValidString(string s) {
        long long val=1;
        for(int i=0;i<s.size();i++){
            int ch=s[i];
            if(val<=0){
                return false;
            }
            if(ch=='('){
                val=val<<1;
            }
            else if(ch==')'){
                val=val>>1;
            }
            else{
                val = val<<1 | val | val>>1;
            }
        }
        
       return val&1; 
    }