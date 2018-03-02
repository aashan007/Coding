#include <iostream>
using namespace std;

int linearSearch(int n,int indexM,int amountG){
    if(indexM>n){
        return amountG*n;
    }

    return amountG*indexM;
}
int binarySearch(int s,int n,int indexM,int amountS,int totalS){
    int mid=(s+n)/2;
    if(mid==indexM){
        totalS+=amountS;
        return totalS;
    }
    if(mid<indexM){
        totalS+=amountS;
        return binarySearch(mid+1,n,indexM,amountS,totalS);
    }
    if(mid>indexM){
        totalS+=amountS;
        return binarySearch(s,mid-1,indexM,amountS,totalS);
    }



}



int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int totalM=0;
	    int n,indexM,amountG,amountS;
	    cin>>n>>indexM>>amountG>>amountS;
	    int resultG=linearSearch(n,indexM,amountG);
	    int resultS=binarySearch(1,n,indexM,amountS,totalM);

      if(resultG<resultS){
        cout<<1<<endl;
      }
      else if(resultS<resultG){
        cout<<2<<endl;
      }
      else{
        cout<<3<<endl;
      }

	}
	return 0;
}
