#include<bits/stdc++.h>

using namespace std;


void zeroMatrix(vector< vector<char> > &mat,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]=='0'){
                mat[i][j]='$';
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]=='$'){
                for(int k=0;k<m;k++){
                    if(mat[k][i]!='$')
                        mat[k][j]='0';
                }
                for(int k=0;k<n;k++){
                    if(mat[i][k]!='$')
                        mat[i][k]='0';
                }
            }
        }
    }

}


int main(){
    int m,n;
    cin>>m>>n;
    vector< vector<char> > mat;
    for(int i=0;i<m;i++){
        vector<char> temp;
        for(int j=0;j<n;j++)
        {
            char tmp;
            cin>>tmp;
            temp.push_back(tmp);
        }
        mat.push_back(temp);
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    zeroMatrix(mat,m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }



}