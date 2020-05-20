class Trie {
private:
    Trie *children[26];
    bool isEnd;
public:
    /** Initialize your data structure here. */
    Trie() {
        this->isEnd=false;
        //parent->isEnd=false;
        for(int i=0;i<26;i++){
            this->children[i]=NULL;
        }
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie *current=this;
        for(int i=0;i<word.size();i++){
            int val = word[i]-'a';
            if(!current->children[val]){
                current->children[val]=new Trie();
            }
            current = current->children[val];
        }
        current->isEnd=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie *current= this;
        for(int i=0;i<word.size();i++){
            int val = word[i]-'a';
            if(!current->children[val]){
                return false;
            }
            current = current->children[val];
        }
        return (current!=NULL && current->isEnd);
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie *current=this;
        for(int i=0;i<prefix.size();i++){
            int val = prefix[i]-'a';
            if(!current->children[val]){
                return false;
            }
            current = current->children[val];
        }
        return current!=NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */