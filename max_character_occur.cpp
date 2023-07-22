char getMaxOccurringChar(string str)
{  
    
    unordered_map<char,int>mp;
     
    int n = str.length();

    char ans;
    
    int cnt=0;
     
    for(int i=0 ;i<n ; i++){
        mp[str[i]]++;
        if(cnt < mp[str[i]]){
            ans = str[i];
            cnt = mp[str[i]];
        }
    }
     
    return ans;
     
}
