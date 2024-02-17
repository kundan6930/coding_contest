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
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    int k1=0,k2=0;
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            k1++;
        }
        s1+=a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(b[i]==0)
        {
            k2++;
        }
        s2+=b[i];
    }
    if(k1==0 && k2==0 && s1==s2)
    {
        cout<<s1<<endl;
    }
    else if(k1==0 && s1<s2+k2)
    {
        
        cout<<"-1"<<endl;
    }
    else if(k2==0 && s2<s1+k1)
    {
        
        cout<<"-1"<<endl;
    }
    else{
        s1+=k1;
        s2+=k2;
        int ans=max(s1,s2);
        cout<<ans<<endl;
    }
}
    return 0;
}