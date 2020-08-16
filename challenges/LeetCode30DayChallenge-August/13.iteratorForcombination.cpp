class CombinationIterator {
     
    
public:
    
    void generate(string character,int start,string str,int len,queue <string> &q){
        if(len==0){
            q.push(str);
            return;
        }
        
        for(int i=start;i<character.length();i++){
             generate(character,i+1,str+character[i],len-1,q);
        }
    }
   queue<string> q;
    CombinationIterator(string characters, int combinationLength) {
        generate(characters,0,"",combinationLength,q);
    }
    
    string next() {
        string str = q.front();
        q.pop();
        return str;
        
        
    }
    
    bool hasNext() {
        return !q.empty();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */