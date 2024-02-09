#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;

for(int i=0;i<pow(2,n);i++)
{  int p;
    for(int j=n-1;j>=0;j--)
    {
        if(j==n-1)
        {
            p=(i>>j)&1;
            cout<<p;
        }
        else
        {
            int c=(i>>j)&1;
            int ans=c^p;
            cout<<ans;
            p=c;
        }
    }
    cout<<endl;
}
    return 0;
}