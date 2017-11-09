#include<iostream>
using namespace std;
typedef long long int ll;

int gcd(int a,int b)
	{
		if(b==0)
			return a;
		return gcd(b,a%b);
	}
ll gcd(int a[],int n)
	{
		int res=a[0];
		for(int i=0;i<n;i++)
			res=gcd(res,a[i]);
		return res;
	}
ll findlcm(int arr[],int n)
	{
		ll ans=arr[0];
		for(int i=0;i<n;i++)
		{
			ans=((arr[i]*ans)/(gcd(arr[i],ans)));
		}
		return ans;
	}
int main()
	{
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
		{cin>>a[i];
		}
	for(int i=0;i<n;i++)
		{cin>>b[i];
		}
	long long int l=findlcm(a,m);
	long long int f=gcd(b,n);
	int count=0;
	
	for(int i = l, j =2; i<=f; i=l*j,j++){
            if(f%i==0){ count++;}
        }
	
	cout<<count<<"\n";
	return 0;
	}

