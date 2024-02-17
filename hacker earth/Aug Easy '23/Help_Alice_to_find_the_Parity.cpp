#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll l,r;
cin>>l>>r;
ll k=r-l+1;
ll e=0,o=0;
if((l%2==0 && r%2==0))
{
    e=(k/2)+1;
    o=k/2;
}
else if((l%2!=0 && r%2!=0))
{
    o=(k/2)+1;
    e=k/2;
}
else
{
    e=k/2;
    o=k/2;
}
if(o%2==0)
{
    cout<<"even"<<endl;
}
else{
   cout<<"odd"<<endl; 
}
    return 0;
}