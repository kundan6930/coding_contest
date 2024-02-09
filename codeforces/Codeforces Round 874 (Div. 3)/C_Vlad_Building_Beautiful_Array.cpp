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
    int a[n];
    int o=0;
    int minio=INT_MAX;
    int minie=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            minie=min(minie,a[i]);
            o++;
        }
        else
        {
           minio=min(minio,a[i]);
        }
    }
    if(o==0 ||o==n)
    {
       cout<<"YES"<<endl;
    }
    else if(minio<minie)
    {
        cout<<"YES"<<endl;
    }

else{
    cout<<"NO"<<endl;
}

}
    return 0;
}