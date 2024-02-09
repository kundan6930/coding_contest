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
    int s=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s^=a[i];
    }
     mini=min(mini,s);
    for(int i=0;i<n;i++)
    {
       
       mini=min(mini,s^a[i]);
    }
    cout<<mini<<endl;
}
    return 0;
}