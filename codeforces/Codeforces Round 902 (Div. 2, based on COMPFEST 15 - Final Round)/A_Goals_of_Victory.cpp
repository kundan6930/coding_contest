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
    vector<int>a(n-1);
    int s=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        s+=a[i];
      //  cout<<s<<" "<<a[i]<<endl;
    }
    s=(0-s);
    cout<<s<<endl;
}
    return 0;
}