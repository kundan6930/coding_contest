#include <bits/stdc++.h>
using namespace std;
using ll=long long;
// time complexity= n(log(log n);
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>p(n+1);
    for(int i=2;i<=n;i++)
    {
        if(p[i]==0)
        {
        for(int j=i;j<=n;j+=i)
        {
            p[j]=i;
        }
        }
    }
    for(int i=0;i<=n;i++)
    {
          cout<<p[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}