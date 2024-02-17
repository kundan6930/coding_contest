#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>b(26,0);
    int c=1;
    int i;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
          c++;
        }
        else
        {
           b[s[i]-'a']=max(b[s[i]-'a'],c);
            c=1;
        }
    }
    b[s[i]-'a']=max(b[s[i]-'a'],c);
   int  ans=0;
    for(int i=0;i<26;i++)
    {
      //  cout<<b[i]<<" ";
        ans+=b[i];
    }
    cout<<ans<<endl;

    return 0;
}