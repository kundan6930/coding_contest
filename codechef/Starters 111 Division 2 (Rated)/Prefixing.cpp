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
    vector<int>a(n);
    map<int,int>mp;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]>0)
        {
            cout<<maxi<<" ";
        }
        else
        {
            cout<<a[i]<<" ";
            mp[a[i]]++;
        }
    }
    cout<<endl;

}
    return 0;
}