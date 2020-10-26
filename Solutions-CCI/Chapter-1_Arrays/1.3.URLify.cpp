#include<bits/stdc++.h>
using namespace std;


void URLify(vector<char> &ch){
    int rightPtr = ch.size()-1;
    //find the first no space letter
     int i = rightPtr;
    while(ch[i]=='$'){
        i--;
    }
    cout<<i<<" "<<ch[i]<<" "<<rightPtr<<endl;
    while(rightPtr>0){
        
        if(ch[i]!='$'){
            ch[rightPtr] = ch[i];
            rightPtr--;
        }
        else{
            ch[rightPtr--] = '0';
            ch[rightPtr--] = '2';
            ch[rightPtr--] = '%';
        }
        i--;

    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<char> ch;
        int len;
        cin>>len;
        for(int i=0;i<len;i++){
            char tmp;
            cin>>tmp;
            ch.push_back(tmp);

        }
        URLify(ch);
        for(int i=0;i<ch.size();i++){
            cout<<ch[i];
        }

        cout<<endl;
        
    }
}