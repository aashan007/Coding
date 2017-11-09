#include <string>
#include <iostream>

using namespace std;
int main()
{
    cin.ignore(0xF4240, '\n');
    string hike;
    cin >> hike;

    int h(0), val(0); //height, valleys
    bool in_val(false); //inside valley now
    for(char s : hike)
    {
        h += s == 'U' ? 1 : -1;
        if(in_val && h >= 0) in_val = false;

        if(!in_val && h < 0)
        {
            in_val = true;
            ++val;
        }
    }

    cout << val << endl;

    return 0;
}
