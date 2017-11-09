#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin>>n>>k;
    int a[n];

    cin>>a[0];
    int max=a[0];
    int min=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    int res=(((max-min)/((2*k)+1))+1);
    cout<<res;
    return 0;
}
