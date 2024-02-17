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
   // map<int,int>m;
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=(ll)a[i];
       // m[a[i]]++;
    }
    if(n==1)
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        ll k=((ll)n*(ll)(n+1))/2;
        if(s>=k)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
    return 0;
}