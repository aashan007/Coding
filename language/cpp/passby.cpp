#include <iostream>
using namespace std;
int add(int a,int b){
	a=a+1;
	b=b+1;
	return a+b;
	}
int add1(int& a,int& b){
	a=a+1;
	b=b+1;
	return a+b;
	}

int main()
	{
	
	int a,b;
	//int *c,*d;
	cin>>a>>b;
	int c,d;
	cin>>c>>d;
	int e,f;
	e=add(a,b);
	f=add1(c,d);
	cout<<e<<" "<<a<<" "<<b<<"\n";
	cout<<f<<" "<<c<<" "<<d;	
	return 0;
	}
	
