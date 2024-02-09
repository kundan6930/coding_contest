#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    int n;
    cin>>n;
    vector<int>a(n);
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    int c=a[0];
    for(int i=1;i<n-1;i++)
    {
       if(a[i]==a[i+1])
       {
          c=a[i+1]+1;
          
       }
       else if(c==a[i+1])
       {
         c=a[i+1]+1;
       }
       else{
          c=a[i+1];
       }
       maxi=max(maxi,c);
    }
    cout<<max(maxi,c)<<endl;



    return 0;
}