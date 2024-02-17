#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
set<int>st;
multiset<int>s;
multiset<int>e;
int a,b;
for(int i=0;i<n;i++)
{
    cin>>a;
    cin>>b;
    s.insert(a);
    e.insert(b);
   // st.insert(a);
    st.insert(b);
}
int maxi=1;
for(auto i: st)
{
       // cout<<a[i][j]<<endl;
        auto k=s.upper_bound(i);
         int st=distance(s.begin(),k);
       /* cout<<*k<<" "<<st<<endl;
       // int st;
        if(k!=s.end() && *k==a[i][j])
        {
             st=distance(s.begin(),k)+1;
             cout<<st<<endl;
        }
        else
        {
             st=distance(s.begin(),k);
              cout<<st<<endl;
        }*/
        auto k1=e.upper_bound(i-1);
        int en;
         en=distance(e.begin(),k1);
       /* cout<<*k1<<endl;
        if(k1!=e.end() && *k1==a[i][j])
        {
             en=distance(e.begin(),k1)+1;
        }
        else
        {
             en=distance(e.begin(),k1);
        }*/
        //cout<<st<<" "<<en<<" "<<i<<endl;
        maxi=max(maxi,st-en);
    
}
 cout<<maxi<<endl;
    return 0;
}