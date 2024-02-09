#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
vector<int>a(n+1,0);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
// if(n==1)
// {
//     cout<<"1"<<endl;
// }
//else{
int ans=0;
if(a[0]==0 && a[1]>0)
{
    a[1]--;
}
else
{
      ans++; 
}
for(int i=1;i<n;i++)
{
    if(a[i-1]>0)
    {
        a[i-1]--;
    }
    else if(a[i]==0 && a[i+1]>0)
    {
        a[i+1]--;
    }
    else{
        ans++;
    }
}
cout<<ans<<endl;
//}
    return 0;
}