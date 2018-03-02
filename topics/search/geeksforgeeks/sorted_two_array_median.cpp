#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findMedian(int *a,int *b,int n ){

  if(n<=0){
    return -1;
  }
  if(n==1){
    return (a[0]+b[0])/2;
  }
  if(n==2){
    return (max(a[0],b[0])+min(a[1],b[1]))/2;
  }
int m1,m2;
if(n%2==1){
m1=a[n/2];
m2=b[n/2];
}
else{
  m1=(a[n/2]+(a[(n-1)/2]))/2;
  m2=(b[n/2]+(b[(n-1)/2]))/2;

}
if(m1==m2){
  return m1;
}
else

  if(m1<m2){
    if(n%2==0){
    return findMedian(a+(n/2)-1,b,n-(n/2)+1);

}
return findMedian(a+(n/2),b,n-(n/2));
}
  else{
    if(n%2==0){
    return findMedian(a,b+(n/2)-1,n-(n/2)+1);

}
    return findMedian(a,b+(n/2),n-n/2);
  }
}






int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    int index=findMedian(a,b,n);
    cout<<index;
  }
}
