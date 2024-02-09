#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int c=0;
for(int i=0;i<n-1;i++)
{
   if(a[i]>a[i+1])
   {
    c++;
   }
}
cout<<c<<endl;
    return 0;
}