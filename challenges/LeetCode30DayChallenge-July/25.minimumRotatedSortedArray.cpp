class Solution {
public:
    int binarySearch(vector<int> &a,int low,int high){
        cout<<low<<" "<<high<<" "<<endl;
        if(low==high) return a[low];

        int mid = (high-low)/2 + low;
        if(a[mid]>a[high]){
            return binarySearch(a,mid+1,high);
        }
        else  if(a[mid]<a[high]){
            return binarySearch(a,low,mid);
            }
        else{
            return binarySearch(a,low,high-1);
        }
        
         
            
    }
    int findMin(vector<int>& nums) {
        int lowest = INT_MAX;
        
        return binarySearch(nums,0,nums.size()-1);
        
    }
};