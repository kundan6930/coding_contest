#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    vector<int>a(3),b(3);
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    if(a[0]+a[1]==b[0]+b[1])
    {
        cout<<"Tie"<<endl;
    }
    else if(a[0]+a[1]>b[0]+b[1])
    {
          cout<<"Alice"<<endl;
    }
    else{
          cout<<"Bob"<<endl;
    }
}
    return 0;
}