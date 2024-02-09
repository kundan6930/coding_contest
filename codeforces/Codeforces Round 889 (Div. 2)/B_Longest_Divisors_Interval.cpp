#include <bits/stdc++.h>
using namespace std;
using ll=long long;
// void solve(vector<ll>&ans, ll n)
// {
    
//     for(int i=2;i*i<=n;i++)
//     {
//         while(n%i==0)
//         {
//             ans.push_back(i);
//             n/=i;
//         }
//     }
//     if(n!=1)
//     {
//         ans.push_back(n);
//     }
// }
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<vector<ll>>ans;
    ll i=1,k=1,c=0;
    for(ll i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        c++;
       }
       else{
        break;
       }
    }
    cout<<c<<endl;
}
    return 0;
}