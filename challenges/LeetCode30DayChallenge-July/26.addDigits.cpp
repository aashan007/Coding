class Solution {
public:
    int addDigits(int num) {
   //     int arr[] = {0,1,2,3,4,5,6,7,8,9};
        int i = 0;
        if(num<10){
            return num;
        }
        int numMod = ((i+(num/10))+num%10)%9;
        if(numMod==0)
            return 9;
        return numMod;
        
    }
};