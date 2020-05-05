int Solution::hammingDistance(const vector<int> &A) {
unsigned long long int result=0,ones=0,zeroes=0;
    for(int i=0;i<32;i++){
        ones=0;
        zeroes=0;
        
        for(int j=0;j<A.size();j++){
            if(A[j]<0){
                continue;
            }
            if(A.size()==1){
                break;
            }
            if(A[j]>>i & 1){
                ones++;
            }
            else{
                zeroes++;
            }
        }
        result = result + ones*zeroes;
    }
    return (result*2)%1000000007;
    }