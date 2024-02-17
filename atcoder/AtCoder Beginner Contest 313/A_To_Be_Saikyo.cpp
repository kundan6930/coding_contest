#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
int maxi=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(i!=0)
    {
    maxi=max(maxi,a[i]);
    }
}
int k=a[0];
if(maxi-k<0)
{
    cout<<"0"<<endl;
}
else{
    cout<<maxi-k+1<<endl;
}
    return 0;
}