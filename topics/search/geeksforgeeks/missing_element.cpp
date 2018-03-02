#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int total=0;
	    cin>>n;
	    int a[n-1];



	    for(int i=0;i<n-1;i++){
	        cin>>a[i];
	        total=total+a[i];

	    }

	    int sum=((n)*(n+1))/2;
      cout<<total<<" "<<n<<" "<<sum<<endl;
	    cout<<(sum-total);

	}

	return 0;
}
