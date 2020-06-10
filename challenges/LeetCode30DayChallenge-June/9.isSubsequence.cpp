 bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(j<t.size() && i != s.size()){
            if(s[i]==t[j]){
            i++;
            //j++;
            
        }
        j++;
            
        }
        if(i== s.size()){
            return 1;
        }
        else
            return 0;
        
        
        
    }