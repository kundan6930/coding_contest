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
    vector<int>a(n);
    map<int,int>m;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        if(m[a[i]]%2==0)
        {
            m.erase(a[i]);
        }
        maxi=max(maxi,(int)m.size());
      cout<<m.size()<<" "<<i<<endl;
    }
    cout<<maxi<<endl;
}
    return 0;
}