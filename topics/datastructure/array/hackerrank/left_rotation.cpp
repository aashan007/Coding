#include<iostream>
using namespace std;

int main(){
  int n,d;
  cin>>n>>d;
  int a[n];
  int b[n];
  int temp;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int c=n;
  for(int i=0;i<d;i++){
    b[c-d]=a[i];
    c++;
  }
  c=0;
  for(int i=d;i<n;i++){
    b[c]=a[i];
    c++;
  }


//   while(d>0)
//   {
//     temp=a[0];
//   for(int i=0;i<n-1;i++){
//
//     a[i]=a[i+1];
//
//
//   }
//
//   a[n-1]=temp;
//   d--;
// }
for(int i=0;i<n;i++){
  cout<<b[i]<<"\t";
}

}
