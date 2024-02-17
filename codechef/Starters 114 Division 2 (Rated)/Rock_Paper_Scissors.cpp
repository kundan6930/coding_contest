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
    string s;
    cin>>s;
    int p1=0,s1=0,r1=0;
    //vector<vector<int>>suf(n+1,vector<int>(3));
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='P')
        {
            p1++;
        }
        else if(s[i]=='S')
        {
            s1++;
        }
        else
        {
            r1++;
        }
        // suf[i][0]=p1;
        // suf[i][1]=r1;
        // suf[i][2]=s1;
    }
    int k1=n/2;
    k1+=1;
    string ans;
    int p2=0,r2=0;
    int z1=(r1+s1);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            ans+='P';
            k1--;
            r1--;
            z1--;
        }
        else if(s[i]=='S')
        {
            if(r1>=k1)
            {
                ans+='P';
                r1--;
                z1--;
            }
            else
            {
               ans+='R';
               k1--;
               z1--;
            }
        }
        else{
             if(z1>=k1)
            {
               ans+='P';
               z1--;
            }
            else
            {
               ans+='S';
               k1--;
            }
        }
    }
    cout<<ans<<endl;
      
    
}
    return 0;
}