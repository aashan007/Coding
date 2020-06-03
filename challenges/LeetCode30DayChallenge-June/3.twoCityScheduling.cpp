int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,int>> cost;
        
        for(int i=0;i<costs.size();i++){
            pair<int,int> p(costs[i][0],costs[i][1]);
            cost.push_back(p);

        }
        sort(cost.begin(),cost.end(),compare);
        int result=0;
        for(int i=0;i<cost.size();i++){
            if(i<cost.size()/2){
                result += cost[i].first;
            }
            else{
                result += cost[i].second;
            }
        }
        return result;
    }