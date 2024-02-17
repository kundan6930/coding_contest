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
    int maxi=0,ans;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x<=10)
        {
            if(y>maxi)
            {
                ans=i+1;
                maxi=y;
            }
        }
    }
    cout<<ans<<endl;
}
    return 0;
}