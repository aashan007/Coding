#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int d,sum=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int countmedian=0;
    int k=0;
    if(d%2==1){
        for(int i=d;i<n;i++){
                    sort(a+k,a+k+d);
                    int med=i/2;
                    k++;
                    if(a[i]>=2*a[med]){
                        countmedian++;
                    }
    }
    }
    else{
        for(int i=d;i<n;i++){
          sort(a+k,a+k+d);
            int med=a[i/2]+a[(i/2)-1];
            k++;
            if(a[i]>=2*med){
                countmedian++;
            }
        }
    }
    cout<<countmedian;
    return 0;
}
