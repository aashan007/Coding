class Solution {
public:
    int climbStairs(int n) {
        //int a[n+1];
        //a[0]=0;
        int s1=1;
        int s2=2;
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int j=3;
        int s3=0;
        while(j<=n){
           // a[j]=a[j-1]+a[j-2];
            s3=s1+s2;
            //int temp=s1;
            s1=s2;
            s2=s3;
            j++;
            
        }
        return s3;
        
        
        
    }
};