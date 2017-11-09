#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <int,int> umap;
    int n;
    cin>>n;
    int a;


    for(int i=0;i<n;i++){
        cin>>a;

        umap[a]++;
    }
    for(int i=0;i<=n;i++){
        cout<<umap[i]<<" ";
    }
    return 0;
}
