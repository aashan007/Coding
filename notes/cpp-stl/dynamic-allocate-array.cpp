#include <iostream>
using namespace std;

int main(){
	int *pointer=NULL;
	cout<<"how many items u are gonna enter"<<endl;
	int input;
	cin>>input;
	pointer=new int[input];
	int temp;
	for(int i=0;i<input;i++)
	{
		cout<<"enter the item"<<i+1<<endl;
		cin>>temp;
		*(pointer+i)=temp;
	}
	for(int i=0;i<input;i++){
	cout<<*(pointer+i)<<endl;
	}
	delete []pointer;
	return 0;
}
