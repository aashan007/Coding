#include<bits/stdc++.h>
using namespace std;


vector <string> crossword_puzzle(vector <string> crossword,vector<string> hint){
  vector <string> ans;
  if(hint.size()==0){
    return;
  }
  if(crossword.size()==0){
    return;
  }

  string currentCrossword=crossword[0];
  string currentString=hint[0];




  // for(int i=0;i<hint.size();i++){
  //   cout<<hint[i]<<endl;
  // }
// approach backtracking







  return ans;

}




int main(){
  vector <string> crossword(10);
  int ** matrix=new int*[10];
  for(int i=0;i<10;i++){
    string a;
    matrix=new int[10];
    cin>>a;
    for(int j=0;j<j;j++){

    }
    crossword.push_back(a);
  }
  string hint;
  cin>>hint;

  //hint splitted
  vector<string> ans;
  string s = hint;
  string delimiter = ";";

  size_t pos = 0;
  string token;
  while ((pos = s.find(delimiter)) !=string::npos) {
      token = s.substr(0, pos);
      ans.push_back(token);
      s.erase(0, pos + delimiter.length());

  }

  vector <string> result=crossword_puzzle(crossword,ans);
    //output
    for(int i=0;i<result.size();i++){
      cout<<result[i];
    }
}
