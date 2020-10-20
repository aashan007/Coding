class Solution {
public:
    int findI(vector<vector <int>> &matrix,int target,int start,int end){
    //    cout<<target<<" "<<start<<" "<<end<<endl;
        if(start<end){
            int mid = start+ (end-start)/2;
       //       cout<<"Test"<<endl;
            if(matrix[mid][0]==target){
                return matrix[mid][0];
            }
         //   cout<<"Test"<<endl;
            if(matrix[mid][0]>target){
                return findI(matrix,target,start,mid);
            }
            else{
                return findI(matrix,target,mid+1,end);
            }
        }
        return start-1;
    }
        bool searchMatrixHelper(vector<int> &matrix,int target,int start,int end){
            cout<<start<<" "<<end<<" "<<endl;
        if(start<end){
            int mid = start+ (end-start)/2;
       //      cout<<"Test"<<endl;
            if(matrix[mid]==target){
                return true;
            }
         //   cout<<"Test"<<endl;
            if(matrix[mid]>target){
                return searchMatrixHelper(matrix,target,start,mid);
            }
            else{
                return searchMatrixHelper(matrix,target,mid+1,end);
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m==0){
            return false;
        }
        int n = matrix[0].size();
 //       cout<<m<<" "<<n<<endl;
        if((m==1 &&n==0)){
           // cout<<" Test"<<endl;
            return false;
        }
   //     int m = matrix.size();
    //    int n = matrix[0].size();
        if(target<matrix[0][0] || target> matrix[m-1][n-1]){
            return false;
        }
        
        int indexI = findI(matrix,target,0,matrix.size());
       // cout<<indexI<<endl;
        if(indexI==target){
            return true;
        }
        
        return searchMatrixHelper(matrix[indexI],target,0,n);
     //   return false;
    }
};