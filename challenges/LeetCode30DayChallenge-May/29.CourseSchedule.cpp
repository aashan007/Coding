class Solution {
public:
    
    bool isCyclic(vector<vector<int>> &aj,vector<int> &visited,vector <int> &recStack,int v){
        if(visited[v]==0){
            visited[v]=1;
            recStack[v]=1;
            for(int i=0;i<aj[v].size();i++){
                if(!visited[aj[v][i]] && isCyclic(aj,visited,recStack,aj[v][i])){
                    return true;
                }
                else if(recStack[aj[v][i]]){
                    return true;
                }
            }
            
        }
        recStack[v]=0;
            return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> visited(numCourses,0);
        vector<int> recStack(numCourses,0);
        vector<vector<int>> aj(numCourses,vector<int>());
        for(int i=0;i<prerequisites.size();i++){
            aj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i=0;i<numCourses;i++){
            if(isCyclic(aj,visited,recStack,i)){
                return false;
            }
        }
        return true;
        
    }
};