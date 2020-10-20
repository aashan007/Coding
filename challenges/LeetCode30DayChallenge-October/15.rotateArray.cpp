class Solution {
public:
    void shift(vector<int>& nums,vector<int> &visited,int i,int k,int val){
        if(visited[i]){
            return;
        }
        
        int mod = (i+k)%nums.size();
        int temp = nums[mod];
        nums[mod] = val;
        visited[i]=true;
    //    cout<<i<<" "<<mod<<" "<<k<<" "<<temp<<" "<<nums[i]<<endl;
        return shift(nums,visited,mod,k,temp);
        
        
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=1){
            return;
        }
        k = k%nums.size();
        if(k==0){
            return;
        }
        vector<int> visited(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(!visited[i])
                shift(nums,visited,i,k,nums[i]);
        }
     
    
 
        
        
    }
};