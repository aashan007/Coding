#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Max,Min;
    int val;
    cin>>val;
    Max=val;
    Min=val;
    n--;
    int count=0;
    while(n--){
        cin>>val;
        if(Max<val){
            count++;
            Max=val;
        }
        if(Min>val){
            count++;
            Min=val;
        }
    }
    cout<<count;
}