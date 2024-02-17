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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m1=INT_MIN,m2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>m1)
        {
            m2=m1;
            m1=a[i];
        }
        else
        {
           if(a[i]<m1 && a[i]>m2)
           {
            m2=a[i];
           }
        }
    }
    cout<<m1+m2<<endl;
}
    return 0;
}