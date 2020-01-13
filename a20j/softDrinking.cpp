#include<bits/stdc++.h>
using namespace std;


int main(){
    float n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    float totalML=(k*l)/n;
    float totalSlices = (c*d)/n;
    float totalSalt = p/n;
    int count=0;
    //cout<<n<<" "<<k<<" "<<l<<" "<<c<<" "<<d<<" "<<p<<" "<<nl<<" "<<np<<endl;
    while(totalML>0 && totalSlices>0 && totalSalt>0){
        //cout<<totalML<<" "<<totalSlices<<" "<<totalSalt<<endl;
        totalML=totalML-nl;
        totalSlices= totalSlices - 1;
        totalSalt=totalSalt-np;
       // cout<<totalML<<" "<<totalSlices<<" "<<totalSalt<<endl;
        if(totalML>=0 && totalSlices>=0 && totalSalt>=0){
            count++;
        }
        //count++:

    }

    cout<<count;
}