class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int k=0;
        int l=A.size()-1;
        
        while(k<l){
            if(A[k]%2==0){
                k++;
            }
            else{
                int temp =A[l];
                A[l] = A[k];
                A[k]=temp;
                l--;
            }
        }
        return A;
        
    }
};