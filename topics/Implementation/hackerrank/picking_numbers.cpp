#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int count=0,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a,a+n);

    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=1){
            count=count+1;
            cout<<count<<endl;
        }


    }
    if(count==0){
        cout<<count;
    }
    else{
        cout<<(count+1);
    }
    return 0;
}
