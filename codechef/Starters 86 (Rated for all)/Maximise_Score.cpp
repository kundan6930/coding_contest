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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mini=abs(a[1]-a[0]);
    for(int i=1;i<n-1;i++)
    {
       mini=min(mini,max(abs(a[i+1]-a[i]),abs(a[i-1]-a[i])));
    }
    mini=min(mini,abs(a[n-2]-a[n-1]));
    cout<<mini<<endl;
}
    return 0;
}