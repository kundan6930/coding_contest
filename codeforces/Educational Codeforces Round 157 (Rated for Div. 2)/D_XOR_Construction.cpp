#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    int n;
    cin>>n;
    vector<int>a(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    map<int,int>ab;
    for(int i=0;i<n-1;i++)
    {
        int kk=i^a[0];
        if(kk<=n-1)
        {
          ab[kk]++;
        }
    }
    map<int,int>mp;
    vector<int>ans;
    for(auto i:ab)
    {
        int k1=i.first;
        int f=0;
        ans.push_back(k1);
        mp[k1]++;
        for(int j=0;j<n-1;j++)
        {
           int k=ans.back()^a[j];
           ans.push_back(k);
           if(k>n-1 || mp[k]>=1)
           {
            f=1;
            break;
           }
           mp[k]++;
        }
        if(f==1)
        {
            mp.clear();
            ans.clear();
        }
        else{
            break;
        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}