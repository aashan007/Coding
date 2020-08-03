class MyHashSet {
    vector<vector<int>> mp;
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        mp = vector<vector<int>> (15000,vector<int>());
    }
    
    void add(int key) {
        int h = key%15000;
        if(find(mp[h].begin(),mp[h].end(),key) == mp[h].end())
            mp[h].push_back(key);
    }
    
    void remove(int key) {
        int i=key%15000;
        auto it = find(mp[i].begin(),mp[i].end(),key);
        if(it != mp[i].end()){
            mp[i].erase(it);
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int i=key%15000;
        auto it = find(mp[i].begin(),mp[i].end(),key);
        if(it == mp[i].end()){
            return false;
        }
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */