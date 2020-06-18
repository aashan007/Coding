int binarySearch(vector<int> &cit,int left,int right,int size){
        if(left<=right){
            int mid = left + (right-left)/2;
            if(cit[mid]<size-mid){
                return binarySearch(cit,mid+1,right,size);
            }
            return binarySearch(cit,left,mid-1,size);
        }
    
        
        
        
        
        
        return size-left;
    }
    int hIndex(vector<int>& citations) {
        
        return binarySearch(citations,0,citations.size()-1,citations.size());
        
    }