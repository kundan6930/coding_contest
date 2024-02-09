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
    int ans,f=0;
    for(int i=n;i>=0;i--)
    {
       int a=((i*(i-1))/2)+(((n-i)*((n-i)-1))/2);
       if(a==k)
       {
         f=1;
         ans=i;
         break;
       }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<ans;i++)
        {
            cout<<"1"<<" ";
        }
         for(int i=0;i<n-ans;i++)
        {
            cout<<"-1"<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
    return 0;
}