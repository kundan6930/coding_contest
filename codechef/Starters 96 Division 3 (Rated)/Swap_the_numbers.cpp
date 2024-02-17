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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(2*k<=n)
    {
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        vector<int>b;
        int size=n-k;
        for(int i=0;i<n;i++)
        {  
             if(i<size)
           {
            b.push_back(a[i]);
           }
           else if(i>=k)
           {
             b.push_back(a[i]);
           }
        }
        sort(b.begin(),b.end());
        int j=0;
        for(int i=0;i<n;i++)
        {  
             if(i<size)
            {
             a[i]=b[j];
             j++;
            }
            else if(i>=k)
            {
              a[i]=b[j];
              j++;
            }
        }

         for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
}
    return 0;
}