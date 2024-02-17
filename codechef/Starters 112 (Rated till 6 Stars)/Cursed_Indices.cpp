#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    multiset<ll>st;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    int c=0;
    ll s=0;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        auto it=st.upper_bound(s);
        if(it==st.end())
        {
            break;
        }
        ans.push_back(*it);
        s+=(*it);
        st.erase(it);
        c++;
    }
   
     for (auto it = st.begin(); it != st.end(); it++)
     {
        ans.push_back(*it);
     }
      cout<<n-c<<endl;
    for(ll i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
        
    }
    cout<<endl;
}
    return 0;
}