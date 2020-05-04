vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
    for(int i=1;i<=A;i++){
        
        if(i%3==0 || i%5==0){
            string temp="";
            if(i%3==0){
                temp= temp +"Fizz";
            }
            if(i%5==0){
                temp=temp +"Buzz";
            }
            res.push_back(temp);
        }
        else{
            
            res.push_back(to_string(i));
        }
    }
    return res;
}