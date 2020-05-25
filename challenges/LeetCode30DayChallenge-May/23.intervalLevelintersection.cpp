vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> result;
        int i=0;
        int j=0;
        while(i<A.size() && j<B.size()){
            vector <int> temp;
            vector <int> a = A[i];
            vector <int> b = B[j];
            if(a[0]>=b[0] && a[0]<=b[1]){
                temp.push_back(max(a[0],b[0]));
                temp.push_back(min(a[1],b[1]));
            }
            else if(b[0]>=a[0] && b[0]<=a[1]){
                temp.push_back(max(a[0],b[0]));
                temp.push_back(min(a[1],b[1]));
                
            }
            if(temp.size()>0)
                result.push_back(temp);
            if(a[1]<b[1]){
                i++;
            }
            else if(b[1]<a[1]){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        
        
        return result;
    }