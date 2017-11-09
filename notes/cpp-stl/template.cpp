#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
 return a+b;
}



int main(){
int a=5;
int b=7;
float c=5.7;
float d=6.1;

cout<<add<int>(a,b);
cout<<"\n"<<add<float>(c,d);
}
