#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    //     cout<<s<<endl;
    //      for(int j=0;j<s.length();j++) 
    //      {
    //     //     int k;
    //     //     cin>>k;
    //     //    // cout<<k<<" ";
    //     //     a[i][j]=k;
    //         a[i][j]=s[j]-'0';
    //      }
    //    //  cout<<endl;
    // }
    // for(int i=0;i<n;i++)
    // {
    //      for(int j=0;j<n;j++) 
    //      {
    //         cout<<a[i][j]-'0'<<" ";
    //      }
    //      cout<<endl;
    // }
    vector<char>b;
    for(int i=0;i<n;i++)
    {
        b.push_back(a[0][i]);
    }
    for(int i=1;i<n;i++)
    {
        b.push_back(a[i][n-1]);
    }
    for(int i=1;i<n;i++)
    {
        b.push_back(a[n-1][n-1-i]);
    }
    for(int i=1;i<n-1;i++)
    {
        b.push_back(a[n-1-i][0]);
    }
    // for(int i=0;i<b.size();i++)
    // {
    //     cout<<b[i]<<" ";
    // }
   // cout<<endl;
   int c=0;
   int k=b.size();
   for(int i=0;i<n;i++)
    {
        a[0][i]=b[(c-1+k)%k];
        c++;
    }
    for(int i=1;i<n;i++)
    {
        a[i][n-1]=b[(c-1+k)%k];
        c++;
    }
    for(int i=1;i<n;i++)
    {
      a[n-1][n-1-i]=b[(c-1+k)%k];
      c++;
    }
    for(int i=1;i<n-1;i++)
    {
        a[n-1-i][0]=b[(c-1+k)%k];
        c++;
    }
    for(int i=0;i<n;i++)
    {
        //  for(int j=0;j<n;j++) 
        //  {
            cout<<a[i]<<endl;
        // }
         
    }
    return 0;
}