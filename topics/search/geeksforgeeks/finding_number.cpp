#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int findpivot(int s,int n,int *a){
int mid=(s+n)/2;
   // cout<<"start "<<s<<" end "<<n<<" mid "<<mid<<endl;
  if(s==n){
    return s;
  }
  if(n==s+1 && a[s]>=a[n]){
    return s;
  }
  if(n==s+1 && a[s]<=a[n]){
    return n;
  }

  if((a[mid]>a[mid+1]) && (a[mid]>a[mid-1])) {
    return mid;
  }
  if((a[mid]>a[mid+1]) && (a[mid]<a[mid-1])){
    return findpivot(s,mid-1,a);
  }
  else{
    return findpivot(mid+1,n,a);
  }

}

int binarySearch(int start,int end,int * a,int val){
    int mid=(start+end)/2;
  // cout<<"start "<<start<<" end "<<end<<" mid "<<mid<<" a[start] "<<a[start]<<" a[end] "<<a[end]<<" a[mid] "<<a[mid]<<endl;
  if(start>end){
    return -1;
  }



  if(a[mid]==val){
    return mid;
  }
  if(a[mid]>val){
    return binarySearch(start,mid-1,a,val);
  }
  else{
    return binarySearch(mid+1,end,a,val);
  }

  return -1;
}
int binarySearchReverse(int start,int end,int * a,int val){
  int mid=(start+end)/2;
// cout<<"Reverse : start "<<start<<" end "<<end<<" mid "<<mid<<" a[start] "<<a[start]<<" a[end] "<<a[end]<<" a[mid] "<<a[mid]<<endl;
  if(start>end){
    return -1;
  }



  if(a[mid]==val){
    return mid;
  }
  if(a[mid]>val){
    return binarySearchReverse(mid+1,end,a,val);
  }
  else{
    return binarySearchReverse(start,mid-1,a,val);
  }

  return -1;
}



int main(){
  int t;
  cin>>t;
  while(t--){
    int n,val;
    cin>>n>>val;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }

    int pivot=findpivot(0,n,a);
int ele=-1,ele1=-1;

    if(pivot==n){
       ele=binarySearch(0,n,a,val);
    }
    else{
     ele=binarySearch(0,pivot,a,val);
     ele1=binarySearchReverse(pivot+1,n,a,val);
}


    if(ele!=-1 || ele1!=-1){
      cout<<max(ele,ele1)<<endl;
    }
    else{
      cout<<"OOPS! NOT FOUND"<<endl;
    }
  }


}
