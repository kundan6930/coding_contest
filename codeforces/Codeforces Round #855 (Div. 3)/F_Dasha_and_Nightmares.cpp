#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 998244353;
int main()
{
      int n;
      cin>>n;
      vector<int>a,b;
      ll ans=1;
      while(n--)
      { 
        string s;
        cin>>s;
        vector<int>freq(26,0);
        for(auto i:s)
        {
           freq[i-'a']++;
        }
        int mask=0;
        for(int i=0;i<26;i++)
        {
           if(freq[i]&1)
           {
              mask|=(1<<i);
           }
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0)
            {
               a.push_back(mask|(i<<26));
            }
        }
       // cout<<mask<<"*"<<endl;
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0)
            {
             int new_mask=1<<26;
             new_mask-=1;
             //cout<<new_mask<<endl;
              new_mask^=mask;
              new_mask^=(1<<i);
              b.push_back(new_mask|(i<<26));
    
              // cout<<new_mask<<" "<<m[new_mask]<<" "<<ans<<endl;

            }

        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<a.size()&& j<b.size())
    {
        if(a[i]==b[j])
        {
            int c=1;
            while(i+1<a.size() && a[i]==a[i+1])
            {
                c++;
                i++;
            }
            ans+=c;
            while(j+1<b.size() && b[j]==b[j+1])
            {
                ans+=c;
                j++;
            }
            i++;
            j++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
          i++;
        }
    }
    cout<<ans/2<<endl;
    return 0;
}