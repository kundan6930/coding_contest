#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<vector<ll>>a(n);
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
          ll k;
          cin>>k;
          a[i].push_back(k);
        //  cout<<k<<endl;
        }
        sort(a[i].begin(),a[i].end());
       
    }
    ll ans=0,mini=INT_MAX,mini1=INT_MAX,f=0;
    for(int i=0;i<n;i++)
    {
        
        if(a[i].size()>=2)
        {
            ll k1=max(a[i][0],a[i][1]);
            ans+=k1;
          //  cout<<ans<<endl;
            mini1=min(mini1,k1);
             if(a[i][0]<mini)
            {
                mini=a[i][0];
                f=2;
            }
        }
        else{
            if(a[i][0]<mini)
            {
                mini=a[i][0];
                f=1;
            }
        }
    }
    if(f==1)
    {
        cout<<ans<<endl;
    }
    else if(f==2){
      ans-=(ll)mini1;
      ans+=(ll)mini;
       cout<<ans<<endl;
    }
}
    return 0;
}