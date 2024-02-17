vector<int> getUnexpiredTokens(int ttl,vector<string> a){
    map<int,int> mp;
    set<int> s;
    vector<int> ans;
    for(int i=0;i<a.size();i++){
        if(a[i][0]=='g'){
            int id=0;
            int j=14;
            while(a[i][j]!=' '){
                id=id*10+(a[i][j]-'0');
                j++;
            }
            int tt=0;
            j++;
            while(j<a[i].length()){
                tt=tt*10+(a[i][j]-'0');
                j++;
            }
            mp[id]=tt+ttl;
            s.insert(tt+ttl);
           
        }
        else if(a[i][0]=='r'){
            int id=0;
            int j=11;
             while(a[i][j]!=' '){
                id=id*10+(a[i][j]-'0');
                j++;
            }
            int tt=0;
            j++;
            while(j<a[i].length()){
                tt=tt*10+(a[i][j]-'0');
                j++;
            }
            if(mp.find(id)!=mp.end() && 
        mp[id] > tt){   
            s.erase(mp[id]);
            mp[id] = tt + ttl;
            s.insert(mp[id]);
        }
        }else{
         
            int j=6;
           
            int tt=0;
         
            while(j<a[i].length()){
                tt=tt*10+(a[i][j]-'0');
                j++;
            }
             auto lb = s.lower_bound(tt+1);
        s.erase(s.begin(),lb);
        return s.size();
            ans.push_back(s.size());
        }
    }
    return ans;
}