class Solution {
    double dou(double x,long n){
         if(n==0) return 1.0;
        if(n==1) return x;
        if(n<0) return dou(1/x,-n);
        
        double result =1;
        if(n%2==0){
            return dou(x*x,n/2);
        }
        else{
            return dou(x*x,n/2)*x;
    }
    }
public:
    
    double myPow(double x, int n) {
        return dou(x,n);
        
        
        
        
    }
};