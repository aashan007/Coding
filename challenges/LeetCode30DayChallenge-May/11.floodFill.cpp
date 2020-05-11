void fillColor(vector<vector <int>>&image/*,int ** &visited*/,int sr,int sc,int newColor,int currColor){
        if(sc<0 || sc >= image[0].size() || sr<0 || sr>=image.size()/* || visited[sr][sc]*/){
            return;
        }
        if(image[sr][sc]!=currColor || image[sr][sc]==newColor){
            return;
        }
       // visited[sr][sc]=1;
        cout<<sr<<" "<<sc<<" "<<newColor<<" "<<currColor<<endl;
        image[sr][sc]=newColor;
        fillColor(image,sr+1,sc,newColor,currColor);
        fillColor(image,sr-1,sc,newColor,currColor);
        fillColor(image,sr,sc+1,newColor,currColor);
        fillColor(image,sr,sc-1,newColor,currColor);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // int ** dp=new int*[image.size()];
        // for(int i=0;i<image.size();i++){
        //     dp[i]=new int[image[i].size()];
        //     for(int j=0;j<image[i].size();j++){
        //         dp[i][j]=0;
        //     }
        // }
        fillColor(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }