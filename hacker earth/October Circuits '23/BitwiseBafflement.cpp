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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int o=0,e=0,o1=0,e1=0;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<32;j++)
        {
            int k=(a[i]>>j)&1;
            if(k==1)
            {
                c++;
            }
        }
        if(c%2==0)
        {
            e++;
        }
        else{
            o++;
        }
        if(o%2==0)
        {
            o1++;
            ans+=(ll)1;
            ans+=(ll)o1;
        }
        else{
            e1++;
            ans+=(ll)o1;
        }
       // cout<<c<<" "<<e<<" "<<o<<" "<<o1<<" "<<e1<<endl;
    }
   cout<<ans<<endl;
}
    return 0;
}