#include<iostream>
using namespace std;

int main()
{
    int n,m,d;

    int count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cin>>d>>m;
    if(n!=m){
      for(int i=0;i<=n-m;i++)
        {
          int sum=0;
            for(int j=i;j<i+m;j++)
              {
                  sum=sum+a[j];

              }
              

              if(sum==d){
                count++;
              }

          }
        }
  else
    {
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum=sum+a[i];
      }
      if(sum==d){
        count++;
      }

  }

cout<<count;

}
