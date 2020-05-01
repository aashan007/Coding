#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int sum=INT_MIN;

    for(int i=0;i<n;i++){
        int sumMax=a[i];
        int iteMax=INT_MIN;
        int j = i-1;
        int temp=sumMax;
        while(j>=0){
            sumMax = sumMax + a[j];
            if(temp<sumMax){
                temp = sumMax;
            }
            j--;

        }
        if(sum<temp){
            sum = temp;
        }
    }
    cout<<sum<<endl;
}