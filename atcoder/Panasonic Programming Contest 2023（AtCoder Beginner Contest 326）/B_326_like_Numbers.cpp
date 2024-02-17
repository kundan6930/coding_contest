#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
int ans=-1;
for(int i=n;i<1000;i++)
{ 
    int k4=i;
    int k1=k4%10;
    k4/=10;
    int k2=k4%10;
    k4/=10;
    int k3=k4%10;
    if(k1==k3*k2)
    {
        ans=i;
        break;
      
    }

}
  cout<<ans<<endl;
    return 0;
}