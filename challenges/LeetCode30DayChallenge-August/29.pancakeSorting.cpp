class Solution {
public:

    void flip(vector<int>& a,int val){
        for(int i=0;i<=val/2;i++){
            int temp=a[i];
            a[i]=a[val-i];
            a[val-i]=temp;
        }
    }
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> result;
      
        for(int i=A.size()-1;i>0;i--){
            for(int j=1;j<=i;++j){
                if(A[j]==i+1){
                    flip(A,j);
                    result.push_back(j+1);
                    break;
                }
            }
            flip(A,i);
            result.push_back(i+1);
        }
        return result;
    }
};