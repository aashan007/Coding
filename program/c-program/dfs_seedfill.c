#include <stdio.h>

int dfs(x,y,visited,n)
{
	if(x>=n || y>=n)
		return visited;
	if(x<0 || y<0)
		return visited;
	if(visited[x][y]==true)
		return visited;
	visited[x][y]=true;
	dfs(x-1,y-1,visited,n);
	dfs(x-1,y,visited,n);
	dfs(x-1,y+1,visited,n);
	dfs(x,y-1,visited,n);
	dfs(x,y+1,visited,n);
	dfs(x+1,y-1,visited,n);
	dfs(x+1,y,visited,n);
	dfs(x+1,y+1,visited,n);
}
int main(){
	int a[4][4]={{1,1,1,1},{1,1,0,0},{0,0,0,1},{1,1,1,1}};
	dfs(0,0,a,4);
	int i,j;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			printf("%d",a[i][j]);
	
	return 0;
}
