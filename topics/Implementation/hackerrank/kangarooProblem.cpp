#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    if(x2>x1 && v2>v1){
        return "NO";
    }
    else if(x1>x2 && v1>v2){
        return "NO";
    }
    else
    {
        if(x1==x2){
            return "YES";
                
        }
        else{
            return kangaroo(x1+v1,v1,x2+v2,v2);
        }
    }
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
