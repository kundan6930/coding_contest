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
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int ans=0,c=0;
    for(auto i:m)
    {
        if(i.second>1)
        {
            ans++;
        }
        else
        {
            c++;
        }
    }
    int k=(c/2);
    if(c%2!=0)
    {
        k+=1;
    }
    cout<<ans+k<<endl;
}
    return 0;
}