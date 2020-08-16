class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()<2) return 0;
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a,const vector<int> &b){
           return a[0]<b[0]; 
        });
        int count=0;
        int last_i=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<intervals[last_i][1]){
                count++;
                if(intervals[i][1]<intervals[last_i][1]) last_i=i;
            }
            else{
                last_i=i;
            }
        }
        return count;
    }
};