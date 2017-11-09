#include<iostream>

#include<string>
using namespace std;

int main(){

	char str[]="a+b";
	char str1[]="a-b";
	char *t=strtoq(str,"+");
	int sum=0,sum1=0;
	while(t!=NULL){
	sum=sum+stoi(t);
	 char *t=strtoq(str,"+");
	}
	cout<<sum;

	}
