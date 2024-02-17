#include <bits/stdc++.h>
using namespace std;
    using ll=long long;
    unordered_map<string, int>mp;
    void generate(string tokenId, int currentTime,int time) 
    {
        mp[tokenId]= currentTime + time;
    }
    void renew(string tokenId, int currentTime,int time) 
    {
        auto it= mp.find(tokenId); 
        if(it==mp.end())
        return;
        else{
        if(mp[tokenId]>currentTime) 
        {
            mp[tokenId]= currentTime + time; 
        }
        }
    }
    int countUnexpiredTokens(int currentTime) 
    {
        int total=0;
        for(auto x:mp) 
        {
           
            if(x.second>currentTime)
            total++;
        }
        return total;
    }
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t1;
cin>>t1;
while(t1--)
{
    int n,t;
    cin>>n>>t;
    vector<string>a;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        string q=a[i];
        int j=0;
        vector<string>s;
        string s1;
        while(j<q.length())
        {
           
            if(q[j]==' ')
            {
               s.push_back(s1);
                s1.erase();
               
            }
            else{
                s1+=q[j];
            }
            cout<<s1<<endl;
            j++;
        }
        s.push_back(s1);
        if(s[0]=="generate")
        {
            int k=stoi(s[2]);
           generate(s[1],k,t);
        }
        else if(s[0]=="renew")
        {
            int k=stoi(s[2]);
            renew(s[1],k,t);
        }
        else
        {
           int k=stoi(s[1]);
           int p1=countUnexpiredTokens(k);
           ans.push_back(p1);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}