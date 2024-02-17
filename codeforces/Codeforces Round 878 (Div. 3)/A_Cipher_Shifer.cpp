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
    string s,ans;
    cin>>s;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(s[i]!=s[j])
        {
            continue;
        }
        else{
            i=j;
            break;
        }
      }
      ans+=s[i];
    }
    cout<<ans<<endl;


}
    return 0;
}