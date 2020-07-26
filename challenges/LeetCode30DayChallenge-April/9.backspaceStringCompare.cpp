bool backspaceCompare(string S, string T) {
        int i=S.size()-1;
        int j=T.size()-1;
        int back=0;
        while(1){
            back=0;
            while(i>=0 && (back>0 || S[i]=='#')){
                if(S[i]=='#'){
                    back++;
                }
                else{
                    back--;
                }
                i--;
            //while()
            }
            back=0;
            while(j>=0 && (back>0 || T[j]=='#')){
                if(T[j]=='#'){
                    back++;
                }
                else{
                    back--;
                }
                j--;
            }
            if(i>=0 && j>=0 && S[i]==T[j]){
                i--;
                j--;
            }
            else{
                break;
            }
            
        }
        return (i==-1) & (j==-1);
        
    }