/*
Megha (Ms Moo Moo) is playing a game in which there is an array of N integers and there are Q queries each query contains a number X and she has to count the number of times X occurs in the given array, as Ms Moo Moo is weak in counting help her in playing the game.

Input :

The first line will contain an integer N Next line contains N integers (array elements) Next line contains an integer Q(number of queries) Each of the next Q lines contains an integer X

Output:

Print the required answer for each query on a separate line.

Contraints:

1<=N<=200000 -1000000<=arrayelements<=1000000 1<=Q<=100000 -1000000<=X<=1000000

*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<int,int> u;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
	u[a[i]]=0;

    }
    
    for(int i=0;i<n;i++){
      u[a[i]]++;
    }

    int q;
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++){
      cin>>b[i];
    }
    for(int i=0;i<q;i++){
      cout<<u[b[i]]<<endl;
    }

    return 0;
}
