#include<bits/stdc++.h>
using namespace std;


int sumSquare(int n){
    int result=0;
    while(n){
        int temp = n%10;
        result= result + temp*temp;
        n=n/10; 
    }

    return result;
}
    bool isHappy(int n) {
        
        unordered_set<int> s;
    while(n){
        int sum = sumSquare(n);
        if(sum==1){
            return 1;
        }
        if(s.count(sum)>0){
            return 0;
        }
        s.insert(sum);

        n=sum;
       
    }
    return 0;
        
    }
      int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
          //  vector<int> nums;
          return isHappy(n);
        }
    }