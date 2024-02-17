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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<"NO"<<endl;
    }
    else if(n==4)
    {
        if(a[0]+a[1]==a[2]+a[3])
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
    }
}
    return 0;
}