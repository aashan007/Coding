int Solution::isPower(int A) {
    //int flag=false;
    if(A==1){
        return 1;
        
    }
    if(A<=3){
        return 0;
    }
    for(int i=2;i*i<=A;i++){
        float ans = log(A)/log(i);
        if(ceil(ans)==floor(ans)){
            return true;
        }
    
        
    
    }
    return false;
}