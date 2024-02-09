#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
vector<pair<int,int>>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i].first;
    cin>>a[i].second;
}
int maxi=0;
      for(int j=0;j<=24;j++)
    {
        int c=0;
       for(int i=0;i<n;i++)
         {
             int k=(a[i].second+j)%24;
             if(k>=9 && k<18)
             {
                c+=a[i].first;
             } 
         }
      //   cout<<c<<" "<<j<<endl;
         maxi=max(maxi,c) ;
    }
    cout<<maxi<<endl;

    return 0;
}