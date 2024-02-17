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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=0;
     for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
         maxi= max(maxi,a[i]);
        }
    }
    cout<<maxi<<endl;
}  
    return 0;
}