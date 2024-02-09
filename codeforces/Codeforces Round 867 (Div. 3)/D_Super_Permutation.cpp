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
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else if(n%2!=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
      cout<<n<<" ";
      int i=n-1;
      int j=2;
      int c=(n/2)-1;
      while(c--)
      {
        cout<<i<<" "<<j<<" ";
        i-=2;
        j+=2;
      }
      cout<<"1"<<endl;
    }
}
    return 0;
}