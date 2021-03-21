class Solution {
public:
    void dfs(vector<vector <int>> & rooms, vector<bool> &visited,int st){
        visited[st] = true;
        for(int i : rooms[st]){
            if(!visited[i])
                dfs(rooms,visited,i);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),0);
        dfs(rooms,visited,0);
        for(int i=0;i<visited.size();i++)
            if(!visited[i])
                return false;
        return true;
    }
};