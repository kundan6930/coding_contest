#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>b(k);
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            (b[i%k].second)+=1;
        }
        else{
            (b[i%k].first)+=1; 
        }
    }
    int f=0;
    int o=0,z=0;
    for(int i=0;i<k;i++)
    {
        //cout<<b[i].first<<" "<<b[i].second<<endl;
        if((b[i].second)%2!=0)
        {
           o+=((b[i].second)/2)+2;
          
        }
        else
        {
           o+=((b[i].second)/2);
        }
    }
    for(int i=0;i<k;i++)
    {
        //cout<<b[i].first<<" "<<b[i].second<<endl;
        if(b[i].second==0)
        {
           z=INT_MAX;
           break;
        }
        else
        {
           z+=(b[i].first);
        }
    }
    int ans=min(o,z);
     cout<<ans<<endl;

}
    return 0;
}