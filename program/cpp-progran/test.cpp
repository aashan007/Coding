int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,s,value,a,b;
    //enter the limit of arrays and no. of query
    cin>>n>>q;
    vector<vector <int>>varArray(n);//it is 2 dimensional vector
    for(int i=0;i<n;i++)
    {
        cin>>s;
        varArray[i].resize(s);
        for(int j=0;j<s;i++)
        {
            cin>>varArray[i][j];
            
        }
       
        
    }
    for(int k=0;k<q;k++)
    {
     cin>>a>>b;
        cout<<varArray[a][b];
    }
        
    return 0;        
    }
