#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1)
    {
         cout<<"YES"<<endl;
         cout<<n<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<"1"<<" ";
        }
        cout<<endl;
    }
    else
    {
        if(k==1)
        {
            cout<<"NO"<<endl;
        }
       else if(k==2)
       {
          if(n%2==0)
          {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++)
            {
                cout<<"2"<<" ";
            }
            cout<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
       }
       else
       {
          if(n==1)
          {
            cout<<"NO"<<endl;
          }
          else{
             cout<<"YES"<<endl;
             int c=n/2;
             if(n%2!=0)
             {
                cout<<c<<endl;
                c=c-1;
                for(int i=0;i<c;i++)
                {
                    cout<<"2"<<" ";
                }
                cout<<"3"<<endl;
             }
             else{
                cout<<c<<endl;
                 for(int i=0;i<c;i++)
                {
                    cout<<"2"<<" ";
                }
                cout<<endl;
             }
          }
       }
    }
}
    return 0;
}