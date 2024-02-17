#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n),d(n),e(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    for(int i=0;i<n;i++)
    {
        e[i]=3*a[i]+b[i];
    }
    sort(e.begin(),e.end(),greater<int>());
    
    

}
    return 0;
}