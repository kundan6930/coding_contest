#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<pair<int,int>>a;
int s=0;
for(int i=0;i<n;i++)
{
    int a1,b1;
    cin>>a1>>b1;
   a.push_back({b1,a1});
}
sort(a.begin(),a.end());
reverse(a.begin(),a.end());

ll ans=(ll)a[0].first;
int k=a[0].second;
ll maxi=0;
for(int i=1;i<n;i++)
{
    if(a[i].second==k)
    {
        maxi=max(maxi,ans+(ll)(a[i].first/(ll)2));
    }
    else{
       maxi=max(maxi,ans+(ll)a[i].first) ;
    }
}
cout<<maxi<<endl;
    return 0;
}