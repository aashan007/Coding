vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        if(K==0)
            return vector<vector<int>>();
        multimap<int,pair<int,int>> mp;
        for(int i=0;i<points.size();i++){
            int distance = (points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            pair<int,int> p(points[i][0],points[i][1]);
            mp.insert({distance,p});
            //mp[distance]=p;
        }
        vector<vector<int>> result;
        for(auto it=mp.begin();it!=mp.end();++it){
            pair<int,int> res = it->second;
            vector<int> temp;
            temp.push_back(res.first);
            temp.push_back(res.second);
            result.push_back(temp);
            K--;
            if(K==0){
                break;
            }
        }
        return result;
        
    }