#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int> > &mat,int m){
	if(m<=1)
		return;
        for(int i=0;i<m/2;i++){
		for(int j=i;j<m-1-i;j++){
			int temp = mat[i][j];
			//0,0 => 0,3
			mat[i][j] = mat[j][m-1-i];
			//0,3 => 3,3
			mat[j][m-1-i] = mat[m-1-i][m-1-j];
			//3,3 => 3,0
			mat[m-1-i][m-1-j] = mat[m-1-j][i];
			mat[m-j-1][i]=temp;


		}
}

}

int main(){
	vector<vector<int> > mat;
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		vector<int> temp1;
		for(int j=0;j<m;j++){
			int temp;
			cin>>temp;
			temp1.push_back(temp);
		}
		mat.push_back(temp1);
	}
	rotateMatrix(mat,m);
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
