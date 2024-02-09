#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
  cin>>a[i];
}
int k=a[0];
int f=0;
for(int i=1;i<n;i++)
{
  if(a[i]!=k)
  {
    f=1;
    break;
  }
}
if(f==0)
{
    cout<<"Yes"<<endl;
}
else{
        cout<<"No"<<endl;
}

    return 0;
}