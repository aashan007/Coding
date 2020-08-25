class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people,0);
        int index = 0;
        int val=1;
        while(candies){
            // cout<<index<<" "<<val<<" "<<res[index]<<" "<<candies<<endl;
            if(val<candies){
                candies-=val;
                res[index]+=val;
            }
            else{
                res[index]+=candies;
                candies=0;
            }
            
            val++;
            index++;
            index= index%num_people;
        }
        
        
        
        return res;
        
    }
};