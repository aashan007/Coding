#include<bits/stdc++.h>

using namespace std;




int main(){

  long long closestNumber=100000000;
  long long val1,val2;

    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        long long val;
        val=a[i]+a[j];
        if(val>0){
        if(closestNumber>val){
            closestNumber =val;
          val1=a[i];
          val2=a[j];
        }
        }
        else{

            val=val*-1;
            if(closestNumber>val){
                  closestNumber =val;
          val1=a[i];
          val2=a[j];
        }
        }

      }
    //   cout<<val1<<" "<<val2<<" "<<closestNumber<<" ";
    }
    // int result=sumrecur(a,n,closestNumber);
    cout<<val1<<" "<<val2<<endl;

  }
