#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    map<int,vector<int>>mp;
    vector<int>a(n),ans(n,1);
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
         mp[a[i]].push_back(i);
    }
    for(auto i:mp)
    {
        
       if(i.second.size()>1)
       {
         c++;
       }
    }
    if(c<=1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int c1=0;
        for(auto i:mp)
        {
            vector<int>b=i.second;
            if(b.size()>1)
            {
                if(c1==0)
                {
                ans[b[0]]=2;
                }
                else if(c1==1)
                {
                   ans[b[0]]=3;
                }
                else{
                    break;
                }
                c1++;
            }
    
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    

}
    return 0;
}