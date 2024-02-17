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
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<i<<" "<<j<<" "<<(i^j)<<" "<<abs(i-j)<<endl;
        }
    }
}
    return 0;
}