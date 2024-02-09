#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int n)
{
  
    return (n == 1 || n == 0) ? 1 : n * solve(n - 1);
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
}
    return 0;
}
#include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n,m;
    cin>>n,m;
    string s;
    cin>>s;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
      cin>>a[i][0];
      cin>>a[i][1];
    }
    int x=a[0][0];
    int y=a[0][0];
    int c=1;
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='A')
      {
        x+=1;
        y+=1;
      }
      else  if(s[i]=='B')
      {
        x+=1;
        y-=1;
      }
      else  if(s[i]=='C')
      {
        x-=1;
        y+=1;
      }
      else  if(s[i]=='D')
      {
        x-=1;
        y-=1;
      }
      if(x==a[c][0] && y==a[])
    }
    
    return 0;

  }