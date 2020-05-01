// Class impementation

#include<algorithm>
class MinStack {
private:
            int size;
            vector<int> st;
            int min;
            int secondMin;
public:
    /** initialize your data structure here. */
    MinStack() {
        this->size=-1;
     //   this->min=32000;
     //   this->secondMin=32000;
    }
    
    void push(int x) {
        st.push_back(x);
        size++;
    /*    if(x<=min){
            secondMin=min;
            min=x;
        }*/
        
    }
    
    void pop() {
        int ele = st[st.size()-1];
        st.pop_back();        
        size--;
      /*  if(ele==min){
            min=secondMin;
        }*/
        
    }
    
    int top() {
        if(size<0){
            return NULL;
        }
        return st[size];
        
    }
    
    int getMin() {
        int min=INT_MAX;
        for(int i=0;i<st.size();i++){
            if(st[i]<min){
                min=st[i];
            }
        }
        return min;
        
    }
};