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
    int ans1=a[0]*100+a[1]*10+a[2];
    int ans2=b[0]*100+b[1]*10+b[2];
   // cout<<ans1<<" "<<ans2<<endl;
    if(ans1>ans2)
    {
        cout<<"Alice"<<endl;
    }
    else if(ans2>ans1){
       cout<<"Bob"<<endl;
    }
    else{
      cout<<"Tie"<<endl;
    }

}
    return 0;
}