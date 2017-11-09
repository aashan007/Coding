
#include <iostream>

using namespace std;

int checkAddSeq(int *x, int *y, int n) {
  for(int i = 0; i < n; i++) {
	 // Write your code is this space
	for(int i=0;i<-1;i++)
    {
      if(x[i]<=x[i+1]){
        y[i]=x[i+1]-x[i];
        
      }
       else
         return 0;
        
      }
return 1;
      

}
return 1;
}
int main(){
	int n;
	cin>>n;
	int a[]={4,7,8,9,5,4};
	int y[n];
	int b=checkAddSeq(a,y,n);
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" "<<endl;
	cout<<y[i]<<" "<<endl;
	}
	cout<<b;
	
}
