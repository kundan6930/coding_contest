#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    vector<int>a(26);
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
       a[s[i]-'a']++;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
      if(a[i]>0)
      {
        c++;
      }
    }
  //  cout<<c<<endl;
    if(c>1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
    return 0;
}