#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=1e9;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
      ll k=(n*(n-1))/2;
    vector<int>a(k);
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int p=0,mini;
    for(int i=0;i<n-1;i++)
    {
         mini=INT_MAX;
          for(int j=0;j<n-i-1;j++) 
          {
              mini=min(mini,a[p]);
              p++;
          }
         
          cout<<mini<<" ";
    }
    cout<<mod;
    cout<<endl;
    

}
    return 0;
}