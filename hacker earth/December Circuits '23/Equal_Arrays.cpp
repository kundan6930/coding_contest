#include <bits/stdc++.h>
using namespace std;
using ll=long long;
    ll n,m;
ll solve(vector<ll>&a,vector<ll>&b)
{
    int i=0,j=0;
    int c=0;
    ll s1=0,s2=0;
    while(i<n && j<m)
    {
       if(s1==s2)
        {
            c++;
            s1=a[i];
            s2=b[j];
            i++;
            j++;
        }
        else if(s1>s2)
        {
             s2+=b[j];
            j++;
        } 
        else{
             s1+=a[i];
            i++;
        } 
       // cout<<s1<<" "<<s2<<endl;
    }
    return c;
}
int main (){
int t;
cin>>t;
while(t--)
{

    cin>>n>>m;
    vector<ll>a(n),b(m);
    ll s1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    ll s2=0;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        s2+=b[i];
    }
    if(s1!=s2)
    {
        cout<<"-1"<<endl;
    }
    else{
     cout<<solve(a,b)<<endl;

    }
}
    return 0;
}