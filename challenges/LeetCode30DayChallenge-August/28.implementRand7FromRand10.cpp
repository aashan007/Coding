// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int n=rand7();
        int m=rand7();
        while(n>5){
            n=rand7();
        }
        while(m==7){
            m=rand7();
        }
        
        
        return (m<=3)?n:n+5;
    }
};