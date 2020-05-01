#include<bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
    int result=0;
    long long count=9;
    while(count<=n){
        //count++;
        result++;
        count=(count*10)+9;
        //n=n/10;
    }
    return result;
}

// bool res(long long a,long long b){
//     long long result= (a*b)+a+b;

//     int digit=countDigit(b);
//     int res=(a*pow(10,digit))+b;

//     if(res==result){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


int main(){
    int t;
    cin>>t;
    while(t--){
        long long A,B;
        cin>>A>>B;
        //long long count=0;
        long long count9=countDigit(B);
        // for(long long i=1;i<=A;i++){
        //     for(long long j=1;j<=B;j++){
        //         if(res(i,j)){
        //           //  cout<<i<<" "<<j<<" "<<count<<endl;
        //             count++;
        //         }
        //     }
        // }

        cout<<(A*count9)<<endl;
    }
}