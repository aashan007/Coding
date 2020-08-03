class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> char_map(26,0);
        for(int i : tasks){
            char_map[i-'A']++;
        }
        sort(char_map.begin(),char_map.end());
        int maxVal = char_map[25] - 1;
        int idle_slots = maxVal * n;
        for(int i=24; i>=0;i--){
            idle_slots -= min(char_map[i],maxVal);
            
        }
        return idle_slots > 0 ? idle_slots + tasks.size():tasks.size();
        
        
    }
};