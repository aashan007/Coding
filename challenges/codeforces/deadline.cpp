#include<bits/stdc++.h>
using namespace std;

int res(int n,int d,int x){
    //cout<<n<<" "<<d<<" "<<x<<endl;
    int result = x + ceil((float)d/(x+1));

   // cout<<result<<endl;
    if(result<=n){
        return result;
    }
    else{
        return -1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
       // cout<<n<<" "<<d<<endl;
        bool flag=true;
        if(d<=n){
            flag=true;
        }
        else{
            int val=-1;
            for(int i=1;i<n;i++){
                int result=res(n,d,i);
                if(val<result){
                    val=result;
                }
            }
      //  cout<<val<<" "<<n<<endl;
        if(val == -1 || val>n){
           // cout<<"T\n";
            flag=false;
        }
        //cout<<<<endl;
        }
      //  cout<<flag<<endl;
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}