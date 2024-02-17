#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            return false;
        }
    return true;
}
void solve(int n,vector<int>&a)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0 && isprime(i))
        {
          a.push_back(i);
        }
    }
}
void solve1(int n,vector<int>&b)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0 && !isprime(i))
        {
          b.push_back(i);
          if(i!=(n/i) && !isprime(n/i))
          {
            b.push_back(n/i);
          }
        }
    }
}

int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<ll>a(n);
    int pro=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pro*=a[i];
    }
vector<int>ab,b;
solve(pro,ab);
solve1(pro,b);
int maxi=0;
for(int i=0;i<b.size();i++)
{  int c=0;
    for(int j=0;j<ab.size();j++)
    {
        if(ab[j]%b[i]==0)
        {
            c++;
        }
    }
    maxi=max(maxi,c);
}
if(maxi==0)
{
    cout<<"0"<<endl;
}
else{
    cout<<maxi<<endl;
}
}
    return 0;
}