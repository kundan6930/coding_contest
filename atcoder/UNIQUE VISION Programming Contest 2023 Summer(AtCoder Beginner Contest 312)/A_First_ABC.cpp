#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
string s;
cin>>s;
vector<int>a(26);
int ans=0;
for(int i=0;i<n;i++)
{
    a[s[i]-'A']++;
    if(a[0]>0 && a[1]>0 && a[2]>0)
    {
         ans=i+1;
         break;
    }
}
cout<<ans<<endl;
    return 0;
}