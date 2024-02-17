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
    string s;
    cin>>s;
    int n=s.length();
    vector<int>a(n+1,0);
    int i=0;
    while(i<n)
    {
          int k=s[i]-'0';
        if(k>=5)  
        {
            break;
        }
        i++;
    }
    for(;i>=1;i++)
    {
        int k=s[i]-'0';
        if(k>=5)
        {
            int k1=s[i+1]-'0';
            k1+=1;
            s[i+1]=k1+'0';
        }
        else
        {
            break;
        }
    }
    int k3=s[0]-'0';
    if(k3>=5)
    {
        a[0]=1;
        string ans;
        ans+=(a[0]+'0');
        for(int i=0;i<=n;i++)
        {
           ans+='0';  
        }
        cout<<ans<<endl;
    }
    else
    {
        string ans;
        
      for(int j=0;j<=i;j++)
      {
        ans+=s[j];
      }
      for(int j=i+1;j<n;j++)
      {
          ans+='0';
      }
      cout<<ans<<endl;
    }
}
    return 0;
}