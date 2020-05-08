bool checkStraightLine(vector<vector<int>>& coordinates) {
        //int flag=true;
        if(coordinates.size()<=2){
            return true;
        }
        int x=coordinates[0][0];
        int y=coordinates[0][1];
        float slope = (float)(coordinates[1][1]-y)/(coordinates[1][0]-x);
        
        for(int i=2;i<coordinates.size();i++){
            int x1=coordinates[i][0];
            int y1=coordinates[i][1];
            float currentSlope = (float)(y1-y)/(x1-x);
            if(slope!=currentSlope){
                return false;
            }
        }
        return true;
    }