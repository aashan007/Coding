class Solution {
public:
    double angleClock(int hour, int minutes) {
        // cout<<(double)(hour*30.0)<<endl;
        // cout<<(double)(minutes*6.0)<<endl;
        // cout<<(double)(((minutes*6)/360.0)*30)<<endl;
        if(hour==12){
            hour=0;
        }
        return min((360 - ((abs((double) ((double)(hour*30.0) + (double)(((minutes*6)/360.0)*30)) -(double)(minutes*6.0)  )))),(abs((double) ((double)(hour*30.0) + (double)(((minutes*6)/360.0)*30)) -(double)(minutes*6.0)  )));
        
    }
};