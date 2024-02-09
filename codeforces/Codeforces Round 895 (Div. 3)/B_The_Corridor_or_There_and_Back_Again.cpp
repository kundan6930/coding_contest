
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
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i].second<3)
        {
            mini=min(mini,a[i].first);
        }
        else
        {
           
           int k=(a[i].second-1)/2;
           mini=min(mini,a[i].first+k);
        }
    }
    cout<<mini<<endl;
}
    return 0;
}