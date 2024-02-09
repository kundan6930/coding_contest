#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>mp;
    int i=0,j=0;
    int maxi=0;
    while(j<n)
    {
       mp[a[j]]++;
       while(mp.size()>x)
       {
         mp[a[i]]--;
         if(mp[a[i]]<=0)
         {
            mp.erase(a[i]);
         }
         i++;
       }
       if(mp.size()==x && mp[y]>=1)
       {
         maxi=max(maxi,j-i+1);
       }
       j++;
    }
    cout<<maxi<<endl;

}
    return 0;
}