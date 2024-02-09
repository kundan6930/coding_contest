#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    ll pos;
    cin>>pos;
    stack<pair<char,ll>>st;
    st.push({s[0],0});
    ll i=1;
    ll n=s.length();
    vector<ll>a;
    while(i<n)
    {
        while(!st.empty() && s[i]<st.top().first)
        {
           // cout<<st.top().first<<" "<<s[i]<<endl;
              a.push_back(st.top().second);
              st.pop();
        }
        //   if(!st.empty() )
        //   {
        // cout<<st.top().first<<" "<<i<<endl;
        //   }
        st.push({s[i],i});
        i++;
    }
    
    while(!st.empty())
    {
         a.push_back(st.top().second);
         st.pop();
    }
    // for(ll i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    i=pos;
    ll j=n;
    ll c=0;
    while(i>j)
    {
        i-=j;
        j--;
        c++;
       // cout<<i<<" "<<j<<endl;
    }
    //cout<<i<<" "<<c<<endl;
     j=0;
    char ans;
    ll c1=c;
    set<ll>ss;
    int k1=0;
    while(c1>0)
    {
        ss.insert(a[k1]);
        //  cout<<a[k1]<<"*"<<endl;
    
        c1--;
        k1++;
    }
    
    while(j<n)
    {  
        if(c>0 && ss.find(j)!=ss.end())
        {
            c--;
        }
        else
        {
          i--;
        }
        if(i==0)
        {
           ans=s[j];
           break;
        }
        j++;
    }
    cout<<ans;

}
    return 0;
}