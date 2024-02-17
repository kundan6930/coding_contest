  #include <bits/stdc++.h>
  using namespace std;
  using ll=long long;
  ll mod=998244353;
  int main (){
   ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  vector<ll>a(n),pre(n+1);
  pre[0]=0;
 int s;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(i==0)
    {
        s=a[i];
    }
    else{
        s=s&a[i];
    }
    pre[i+1]=pre[i]^a[i];
    cout<<pre[i+1]<<endl;
    cout<<s<<"*"<<endl;
  }
  for(int i=0;i<n;i++)
  {
    ll x=0;
     for(int j=i;j<n;j++)
     {
        x^=a[j];
        cout<<x<<" "<<j-i+1<<endl;
        //cout<<(39^80)<<endl;
     }
  }

    return 0;
  }