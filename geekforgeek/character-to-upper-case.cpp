#include<iostream>
#include<string>
using namespace std;

void convertOpposite(string &str)
	{
		int ln=str.length();
		for(int i=0;i<ln;i++)
			{
				if(str[i]>='a' && str[i]<='z')
					str[i]=str[i]-32;
				else if(str[i]>='A' && str[i]<='Z')
					str[i]=str[i]+32;
			}
	}
int main()
	{
	string s;
	getline(cin,s);
	convertOpposite(s);
	cout<<s;
	return 0;
	}
				
