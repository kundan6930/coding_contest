#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    int mini=INT_MAX;
    vector<int>b;
    if(k!=4)
    {
    for(int i=0;i<n;i++)
    {
       int k1=a[i]%k;
        k1=(k-k1)%k;
        mini=min(mini,k1);
    }
     cout<<mini<<endl;
    }
    else{
        for(int i=0;i<n;i++)
    {
       int k1=a[i]%k;
        k1=(k-k1)%k;
        mini=min(mini,k1);
    }
        for(int i=0;i<n;i++)
       {
       int k1=a[i]%2;
        k1=(2-k1)%2;
        b.push_back(k1);
       // mini=min(mini,k1);
        }
        sort(b.begin(),b.end());
        mini=min(mini,b[0]+b[1]);
        cout<<mini<<endl;
    }
   
}
    return 0;
}