#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month_leapyear[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int month_1918[]{31,15,31,30,31,30,31,31,30,31,30,31};
    string data;
    if(year<=1917){
      if(year%4==0){

        data="12.09."+to_string(year);
        return data;
      }
      else
        {
        data="13.09."+to_string(year);
        return data;
      }
    }
    else if(year>1918){
      if(year%400==0 || (year%4==0 && year%100 !=0)){

        data="12.09."+to_string(year);
        return data;
      }
      else
{
        data="13.09."+to_string(year);

return data;}
    }
    else{

      data="26.09."+to_string(year);

    return data;}
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;

}
