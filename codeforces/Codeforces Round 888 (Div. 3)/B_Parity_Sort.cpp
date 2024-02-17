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
    vector<int>b=a;
    sort(b.begin(),b.end());
    int f=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]%2==0 && b[i]%2!=0) ||(a[i]%2!=0 && b[i]%2==0) )
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
    return 0;
}