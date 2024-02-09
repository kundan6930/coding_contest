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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    int mo=1;
    for(int i=0;i<n-1;i++)
    {
       if(a[i]==a[i+1])
       {
         ans++;
       }
       else if(a[i]>a[i+1])
       {
          mo=0;
       }
       else{
        if(mo==0)
        {
            ans++;
        }
         mo=1;
       }
    }
      if(mo==0)
        {
            ans++;
        }
        cout<<ans<<endl;

}
    return 0;
}