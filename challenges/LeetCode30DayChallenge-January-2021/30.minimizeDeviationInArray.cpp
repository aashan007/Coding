class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        priority_queue<int> pq;
        int Min = INT_MAX;
        for(int i:nums){
            if(i%2)
            {
                pq.push(i*2);
                Min = min(Min,i*2);   
            }
            else{
                 pq.push(i);
            
            Min = min(Min,i);
                
            }
               
        }
        int diff = INT_MAX;
        while(pq.top() %2 ==0){
            int Max = pq.top();
            pq.pop();
            diff = min(diff,Max-Min);
            Min = min(Max/2,Min);
            pq.push(Max/2);
        }
        
        return min(diff,pq.top()-Min);
        
    }
};