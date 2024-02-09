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
    vector<int>ans(n);
    int e=0,o=0;
    vector<int>e1,o1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
            e1.push_back(a[i]);
        }
        else{
            o++;
            o1.push_back(a[i]);
        }
    }
    
    if(e%2!=0 || o%2!=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
    sort(e1.begin(),e1.end(),greater<int>());
    sort(o1.begin(),o1.end(),greater<int>());
    int n1=e1.size(),n2=o1.size();
    int i=0,j=0;
    int k=0;
   // cout<<n1/2<<" "<<n2/2<<endl;
    while(i<n1/2 && j<n2/2)
    {
       int k1=e1[i]+e1[n1-i-1];
    //   cout<<k1<<endl;
       int k2=o1[j]+o1[n2-j-1];
      // cout<<k1<<" "<<k2<<endl;
       if(k1>=k2)
       {
           ans[k]=(k1)/2;
           ans[k+(n/2)]=(e1[i]-e1[n1-i-1])/2;
           i++;
           k++;
       }
       else
       {
            ans[k]=(k2)/2;
            ans[k+(n/2)]=(o1[j]-o1[n2-j-1])/2;
            j++;
            k++;
       }
    }
    while(i<n1/2)
    {
           ans[k]=(e1[i]+e1[n1-i-1])/2;
           ans[k+(n/2)]=(e1[i]-e1[n1-i-1])/2;
           i++;
           k++;
    }
    while(j<n2/2)
    {
           ans[k]=(o1[j]+o1[n2-j-1])/2;
           ans[k+(n/2)]=(o1[j]-o1[n2-j-1])/2;
           j++;
           k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }
}
    return 0;
}