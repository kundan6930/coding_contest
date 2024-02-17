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
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<int>pos;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            pos.push_back(i);
        }
    }
    if(pos.size()==0)
    {
         cout<<"0"<<endl;
    }
    else
    {
        int n1=pos.size();
        int ans=pos[n1-1]-pos[0]+1;
        cout<<ans<<endl;
    }
}
    return 0;
}