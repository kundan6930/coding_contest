#include <bits/stdc++.h>
using namespace std;
using ll=long long;
  int n1,k;
bool solve(vector<int>pos,int m)
{
     int c=0,i=0,j=pos[0];
    // cout<<m<<endl;
     while(i<n1)
     {
          if(pos[i]<j+m)
          {
             i++;
          }
          else
          {
             j=pos[i];
             c++;
          }
     }
     c++;
    // cout<<c<<" "<<m<<endl;
     if(c<=k)
     {
        return true;
    }
    return false;
}
int main (){
   int n;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>pos;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            pos.push_back(i);
        }
    }
     n1=pos.size();
    int st=1,e=n,ans;
    while(st<=e)
    {
        int m=(st+e)/2;
       // cout<<m<<" "<<solve(s,m)<<endl;
        if(solve(pos,m))
        {
            ans=m;
            e=m-1;
        }
        else
        {
            st=m+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}