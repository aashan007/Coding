#include<iostream>
#include<vector>
using namespace std;//one example of container is vector
int main(){

	vector<int> v(10);
	for(int i=0;i<v.size();i++)
	{
	v[i]=i*10;
	}
	for(int i=0;i<v.size();i++)
        {
        cout<<v[i];
       }
	cout<<v.empty();
	v.push_back(-1);
	cout<<v[10]<<endl;
	v.resize(15);
	 for(int i=0;i<v.size();i++)
        {
        cout<<v[i];
       }
}
