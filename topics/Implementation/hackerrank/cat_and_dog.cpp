#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  vector<string> answer;
  int a[n][3];

  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>a[i][j];
    }
  }
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<3;j++)
  //
  // }
  for(int i=0;i<n;i++){
    int a1=a[i][0]-a[i][2];
    int a2=a[i][1]-a[i][2];
    if(abs(a1)>abs(a2)){
      s="Cat B";
    answer.push_back(s);


    }
    else if(abs(a1)<abs(a2))
    {s="Cat A";
    answer.push_back(s);

  }
  else{
    s="Mouse C";
    answer.push_back(s);

  }
}
for(int i=0;i<n;i++){
  cout<<answer[i]<<endl;
}



}
