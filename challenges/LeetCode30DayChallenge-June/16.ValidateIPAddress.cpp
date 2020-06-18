bool checkI5(string s){
        bool flag=true;
        if(s.size()==0){
            return false;
        }
        if(s.size()==1 && s[0]=='0'){
            return true;
        }
        for(int i=0;i<s.size();i++){
            if((s[i]=='0' && flag) || !(s[i]>='0' && s[i]<='9')){
                return false;
            }
            else{
                flag=false;
            }
            
        }
        stringstream number(s); 
        int x = 0; 
        number >> x;
        if(x>255){
            return false;
        }
        return true;
        
        
    }
    
    bool checkI7(string s){
        if(s.size()==0){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(!((s[i]>='a' && s[i]<='f') || (s[i]>='A' && s[i]<='F') || (s[i]>='0' && s[i]<='9'))){
                cout<<s[i];
                cout<<"reached"<<endl;
                return false;
            }
            
        }
        return true;
        
        
    }
    string checkIpv4(string &IP){
      
        vector<string> s;
        int j=0;
        int i=0;
        for(;i<IP.size();i++){
            if(IP[i]=='.'){
              
                s.push_back(IP.substr(j,i-j));
                j=i+1;
                
            }
            
            
        }
        s.push_back(IP.substr(j,i-j));
        // for(int i=0;i<s.size();i++){
        //     cout<<s[i]<<endl;
        // }
        for(int i=0;i<s.size();i++){
            if(s.size()==4){
                if(!checkI5(s[i])){
                    return "Neither";
                }
            }
            else{
                return "Neither";
            }
        }
        
        return "IPv4";
        
        
        
        
        
    }
    string checkIpv6(string &IP){
        vector<string> s;
        int j=0;
        int i=0;
        for(;i<IP.size();i++){
            if(IP[i]==':'){
              s.push_back(IP.substr(j,i-j));
              j=i+1;
                
            }
            
            
        }
        s.push_back(IP.substr(j,i-j));
        for(int i=0;i<s.size();i++){
            
        }
        for(int i=0;i<s.size();i++){
            if(s.size()==8){
                if(!checkI7(s[i]) || s[i].size()>4){
                    return "Neither";
                }
            }
            else{
                return "Neither";
            }
        }
        
        return "IPv6";
        
        
        
        
        return "Neither";
    }
    string validIPAddress(string IP) {
        bool type=false;
        for(int i=0;i<IP.size();i++){
            if(IP[i]=='.'){
                type =true;
                break;
            }
        }
        if(type){
            return checkIpv4(IP);
        }
        else{
            return checkIpv6(IP);
        }
        
        return "Neither";
    }
};