#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>app(n);
    vector<ll>apt(m);
    for(int i=0;i<n;i++)
    {
        cin>>app[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>apt[i];
    }
    sort(app.begin(),app.end());
    sort(apt.begin(),apt.end());
    int i=0,j=0;
    ll c=0;
    while(i<n && j<m)
    {
        if(apt[j]<=app[i]+k && apt[j]>=app[i]-k)
        {
           c++;
           i++;
           j++;
        }
        else if(apt[j]<app[i]-k)
        {
          j++;
        }
        else if(apt[j]>app[i]+k)
        {
            i++;
        }
    }
    cout<<c<<endl;
    return 0;
    }