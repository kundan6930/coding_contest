#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

int n;
cin>>n;
int s=0;
for(int i=5;i<=n;i*=5)
{
   s+=(n/i);
}
cout<<s<<endl;
    return 0;
}