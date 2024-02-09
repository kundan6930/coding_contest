#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    vector<int>fre(maxi+1),mini(maxi+1);
    for(int i=0;i<n;i++)
    {
        fre[a[i]]++;
    }
    int mini1=INT_MAX;
    for(int i=0;i<=maxi;i++)
    {
        mini1=min(mini1,fre[i]);
        mini[i]=mini1;
    }
    vector<int>ans(maxi+2);
    ans[maxi+1]=mini[maxi];
    for(int i=maxi-1;i>=0;i--)
    {
       ans[i+1]=mini[i]-mini[i+1];
    }
    int zeroes=0;
    for(int i=0;i<=maxi;i++)
    {
      zeroes+=(fre[i]-mini[i]);
    }
     vector<int>ans1;
    for(int i=maxi+1;i>=0;i--)
    {
        int k=ans[i];
       while(k--)
       {
        ans1.push_back(i);
       }
    }
   
    while(zeroes--)
    {
        ans1.push_back(0);
    }
    cout<<ans1.size()<<endl;
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}