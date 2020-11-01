class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int leftPtr = -1;
        int rightPtr = 0;
        int maxLength = -1;
        int n = seats.size();
        while(rightPtr<n){
       //     cout<<rightPtr<<": "<<maxLength<<endl;
            if(seats[rightPtr]){
                if(leftPtr==-1){
                     maxLength=max(maxLength,rightPtr);
                    
                }
                   
                else
                {
                    //int len = (rightPtr-leftPtr)/2+(rightPtr-leftPtr)%2;
                    int len = leftPtr + (rightPtr-leftPtr)/2;
                    len = min(len-leftPtr,rightPtr-len);
                    maxLength=max(maxLength,len);
                }
                leftPtr=rightPtr;
                   
                
            }
            rightPtr++;
        }
        maxLength=max(maxLength,rightPtr-leftPtr-1);
        
        return maxLength;
        
        
        
    }
};