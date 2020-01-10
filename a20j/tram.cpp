#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int x,y;
    int capacity=0;
    int Max=-1;
    while(n--){
        cin>>x>>y;
        capacity=capacity-x+y;
        if(Max<capacity){
            Max=capacity;
        }

    }
    cout<<Max;
}