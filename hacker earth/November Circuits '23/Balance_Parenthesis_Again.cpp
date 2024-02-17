#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
ll n,ans=0;
cin>>n;
string s;
cin>>s;
vector<int>a,b;
for(int i=0;i<n;i++)
{
        if(s[i]=='(')
        {
          a.push_back(i+1);
        }
        else{
            b.push_back(i+1);
        }
}
vector<int>c;
int i=0,j=0;
int n1=a.size(),n2=b.size();
while(i<n1 && j<n2)
{
    c.push_back(a[i]);
    c.push_back(b[j]);
    i++;
    j++;
}
while(i<n1)
{
     c.push_back(a[i]);
     i++;
}
while(j<n2)
{
     c.push_back(b[j]);
     j++;
}
for(int i=0;i<(int)c.size()-1;i++)
{
    cout<<c[i]<<" "<<c[i+1]<<endl;
}
//cout<<ans<<endl;
    return 0;
}