class Solution {
public:
    int calculateVal(vector<int> &nums,int val){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]/val;
            if(nums[i]%val){
                sum++;
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int low = 1;
        int high = nums[nums.size()-1]+1;
        int mid = low;
        while(low<high){
            
            mid = low + (high-low)/2;
      //      cout<<low<<" "<<mid<<" "<<high<<endl;
            int result = calculateVal(nums,mid);
        //    cout<<result<<endl;
            if(result<=threshold){
                high = mid;
            }
            
            else{
                low = mid+1;
            }
            
        }
        return low;
        
    }
};