class Solution {
    int res(string &s1,string &s2){
        int i=0,j=0;
        int val1=0,val2=0;
        while(i<s1.size() && j<s2.size()){
        
            while(s1[i]!='.'){
                val1= (val1*10) +(s1[i]-'0');
                i++;
                if(i==s1.size()){
                    break;
                }
            }
            
            while(s2[j]!='.'){
                val2=(val2*10)+(s2[j]-'0');
                
                j++;
                if(j==s2.size()){
                    break;
                }
            }
            if(val1!=val2){
                return val1>val2?1:-1;
                
            }
            i++;
            j++;
            val1=0;
            val2=0;
        
        }
        
        return 0;
    }
public:
    void addZero(string &str,int n){
        while(n--){
            str = str +".0";
        }
    }
    int compareVersion(string version1, string version2) {
        int m=0,n=0;
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.'){
                m++;
            }
        }
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.'){
                n++;
            }
        }
        
        if(m !=n){
            if(m<n){
                addZero(version1,n-m);
            }
            else{
                addZero(version2,m-n);
            }
        }
        return res(version1,version2);
        
    }
};