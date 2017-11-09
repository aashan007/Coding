#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,temp,sum;
    vector<string> arr;
    cin>>n;
    while(n>0){
        int m;
        int fact=1;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a,a+m);
/*        for(int i=0;i<m;i++){
		cout<<a[i];
	}
*/

	if(m%2==0){
	temp=a[0]+a[m-1];

	for(int i=1;i<m/2;i++){
		sum=a[i]+a[m-i-1];

		if(temp==sum){

			continue;
			}
		else{
			fact=0;
			break;
			}
		}
		if(fact==0){
			arr.push_back("NO");
			}
		if(fact==1){
			arr.push_back("YES");
			}


        n--;
    }

	}
  for(int i=0;i<arr.size();i++){
  cout<<arr[i]<<endl;

}
}
