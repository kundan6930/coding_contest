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
    vector<int>a(n);
    int p=0,ne=0,maxi=-21, mini=21,pi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=0)
        {
            ne++;
        }
        else{
            pi=i;
            p++;
        }
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    if(mini==maxi)
    {
        cout<<"0"<<endl;
    }
    else if(p==n)
    {
          cout<<n-1<<endl;
          for(int i=1;i<=n-1;i++)
          {
            cout<<i+1<<" "<<i<<endl;
          }
    }
    else if(ne==n)
    {
        cout<<n-1<<endl;
          for(int i=n;i>1;i--)
          {
            cout<<i-1<<" "<<i<<endl;
          }
    }
    else
    {
        cout<<2*n+4<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<pi+1<<" "<<pi+1<<endl;
        }
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<" "<<pi+1<<endl;
        }
          for(int i=1;i<=n-1;i++)
          {
            cout<<i+1<<" "<<i<<endl;
          }
    }
}
    return 0;
}