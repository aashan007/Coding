    string stringShift(string s, vector<vector<int>>& shift) {
        int countShift=0;
        for(int i=0;i<shift.size();i++){
            if(shift[i][0]){
                countShift+=shift[i][1];
            }
            else{
                countShift-=shift[i][1];
            }
        }
        string res;
     //   cout<<countShift<<endl;
        if(countShift>0){
            countShift=countShift%s.size();
            
             res = s.substr(s.size()-countShift)+s.substr(0,s.size()-countShift);
            
        }
        else{
            countShift=(countShift*-1)%s.size();
             res = s.substr(countShift,s.size())+s.substr(0,countShift);
        }
        return res;
        
    }