#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int k=0;
    vector<int>a(n);
    vector<int>b(n);
    map<int,int>mp;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        k=__gcd(a[i],k);
        maxi=max(maxi,a[i]);
    }
    if(k>=m)
    {
        cout<<k<<endl;
    }
    else
    {
        int maxi1=0;
        for(int i=1;i<=m;i++)
        {
            int c=0;
           for(int j=i;j<=maxi;j+=i)
           {
              if(mp[j]>0)
              {
                c+=mp[j];
              }
           }
           if(n-c<=1)
           {
              maxi1=max(maxi1,i);
           }
        }
        cout<<maxi1<<endl; 
    }

}
    return 0;
}