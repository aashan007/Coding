class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        stack<int> st1,st2;
        for(int i=0;i<digits.size();i++){
            st1.push(digits[i]);
        }
        vector<int> temp;
        int flag=true;
        int val=0;
        while(!st1.empty()){
            val = st1.top();
            if(flag){
                val++;
                flag=false;
            }
            if(val!=10){
                st2.push(val);
                
            }
            else{
                st2.push(0);
                flag=true;
            }
            st1.pop();
        }
        if(flag){
            st2.push(1);
        }
        while(!st2.empty()){
            
            temp.push_back(st2.top());
            st2.pop();
        }

        return temp;
        
    }
};