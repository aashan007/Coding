public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        st = unordered_set<int>();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(st.count(val)>0){
            return false;
        }
        st.insert(val);
        
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(st.count(val)>0){
            st.erase(val);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int size = st.size();
        int ran = rand()%size;
        auto it = st.begin();
        for(int i=0;i<ran;i++){
            ++it;
        }
        return *it;
    }
};