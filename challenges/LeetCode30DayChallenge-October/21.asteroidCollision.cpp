class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       vector<int> st;
        for(int i=0;i<asteroids.size();i++){
            if(st.size()==0 || asteroids[i]>0){
             //   cout<<asteroids[i]<<" "<<st.size()<<endl;
                st.push_back(asteroids[i]);
              //  cout<<1<<endl;
            }
            else{
                while(true){
                    int top = st[st.size()-1];
                    if(top<0){
                        st.push_back(asteroids[i]);
                       // cout<<2<<endl;
                        break;
                    }
                    else if(top == -asteroids[i]){
                        st.pop_back();
                       // cout<<3<<endl;
                        break;
                    }
                    else if(top > -asteroids[i]){
                     //   cout<<4<<endl;
                        break;
                    }
                    else{
                        st.pop_back();
                        if(st.size()==0)
                        {
                            st.push_back(asteroids[i]);
                   //         cout<<5<<endl;
                            break;
                        }
                        
                    }
                }
            }
        }
        
        
        return st;
    }
};