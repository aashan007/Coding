#include<bits/stdc++.h>
using namespace std;
void swapDig(int** a,int i,int j){
    
    a[i][j]= !a[i][j];
    if((i+1)<3)
    {
        a[i+1][j]=!a[i+1][j];
       
    }
    if((i-1)>-1){
        a[i-1][j]= !a[i-1][j];
      
    }
    if(j+1<3)
       {

        a[i][j+1]= !a[i][j+1];
       
       }
    if((j-1)>=0)
        {
            a[i][j-1]= !a[i][j-1];
          
    
        }
    
   
    
    
    

}
int main(){
    int** a=new int*[3];
    
    for(int i=0;i<3;i++){
        a[i]=new int[3];
        for(int j=0;j<3;j++){
            a[i][j]=1;
        }
    }
    
    int b[3][3];
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
              //  cout<<i<<" "<<j<<" "<<":"<<" ";
                cin>>b[i][j];}
        }
   
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)

            {
                if((b[i][j])%2){
                    //cout<<b[i][j]<<endl;
                    swapDig(a,i,j);
                    //cout<<"dig "<<i<<" "<<j<<endl;
                }
            }
       // cout<<endl;
    }

                
            
        

    



    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }


}