int binaryFind(long long start,long long end){
        if(start<end){
            long long mid=(start+end)/2;
            if(isBadVersion(mid) && (mid==0 || !isBadVersion(mid-1))){
                return mid;
            }
            else if(isBadVersion(mid)){
                return binaryFind(start,mid);
            }
            else{
                return binaryFind(mid+1,end);
            }
            
        }
        if(start==end){
            return end;
        }
        return 1;
    }
    
    int firstBadVersion(int n) {
        
        return binaryFind(1,n);
        
    }