#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n,m;
cin>>n>>m;
 multiset<ll>a;
 ll num;
for(ll i=0;i<n;i++)
{   
    cin>>num;
    a.insert(num);
}
ll k;
for(ll i=0;i<m;i++)
{
    cin>>k;
    if(a.size()==0)
    {
        cout<<"-1"<<endl;
    }
    else{
    auto pos=a.lower_bound(k);
    if(pos!=a.begin() && *pos!=k)
    {
        cout<<*(--pos)<<endl;
        a.erase(pos);
    }
    else if(*pos==k)
    {
       cout<<*pos<<endl;
        a.erase(pos);
    }
    else
    {
        cout<<"-1"<<endl;
    }
    }
}
/*for(ll i=0;i<(ll)ans.size();i++)
{
   cout<<ans[i]<<endl;
}*/

    return 0;
}