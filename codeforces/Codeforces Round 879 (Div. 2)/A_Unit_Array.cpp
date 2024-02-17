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
    int p=0,ne=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==-1)
        {
            ne++;
        }
        else{
            p++;
        }
    }
    if(p>=ne && ne%2==0)
    {
        cout<<"0"<<endl;
    }
    else if(p>=ne && ne%2!=0)
    {
        cout<<"1"<<endl;
    }
    else if(p<ne )
    {
        int k=ne-p;
        if(k%2==0)
        {
            int ans=k/2;
            ne=ne-ans;
            if(ne%2==0)
            {
                cout<<ans<<endl;
            }
            else{
                cout<<ans+1<<endl;
            }
        }
        else{
            
            int ans=(k/2)+1;
            ne=ne-ans;
            if(ne%2==0)
            {
                cout<<ans<<endl;
            }
            else{
                cout<<ans+1<<endl;
            }
        }
    }
}

    return 0;
}