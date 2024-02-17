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
    vector<int>b(100,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    int f=0;
    for(int i=0;i<100;i++)
    {
      //  cout<<b[i]<<" "<<b[i+1]<<endl;
       if(b[i]<b[i+1])
       {
         f=1;
         break;
       }
    }
    if(f==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}
    return 0;
}