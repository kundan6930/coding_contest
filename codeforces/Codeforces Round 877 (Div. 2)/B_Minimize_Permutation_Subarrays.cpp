#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<int>a(n);
    int maxi=0,c1,c2,max1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxi)
        {
            maxi=a[i];
            max1=i+1;
        }
        if(a[i]==1)
        {
            c1=i+1;
        }
        if(a[i]==2)
        {
            c2=i+1;
        }
    }
    if(c1>max1 && c2>max1)
    {
        if(c2>c1)
        {
            cout<<max1<<" "<<c1<<endl;
        }
        else{
           cout<<max1<<" "<<c2<<endl; 
        }
    }
    else if(c1<max1 && c2<max1)
    {
        if(c2>c1)
        {
            cout<<max1<<" "<<c2<<endl;
        }
        else{
           cout<<max1<<" "<<c1<<endl; 
        }
    }
    else
    {
        cout<<"1"<<" "<<"1"<<endl;
    }

}
    return 0;
}