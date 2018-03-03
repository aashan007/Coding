#include<bits/stdc++.h>

using namespace std;

int binarySearch(int start,int last,int *a,int val){
  int mid;
  if(start>last){
    return a[mid];
  }
  mid=(start+last)/2;

  if(a[mid]==val){
    return a[mid];
  }
  if(a[mid]>val){
    return binarySearch(mid+1,last,a,val);
  }
  else{
    return binarySearch(start,mid-1,a,val);
  }


}



int main(){
  int n;
  cin>>n;
  int num;
  cin>>num;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<n<<" "<<num<<endl;
  int cei=binarySearch(0,n,a,num);
  int flooring=binarySearch(0,n,a,num);
  cout<<cei<<endl;
}
