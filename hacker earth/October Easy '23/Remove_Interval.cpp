#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<pair<pair<int,int>,int>>a;
vector<int>s;
for(int i=0;i<n;i++)
{
    int a1,b1;
    cin>>a1>>b1;
    s.push_back(a1);
    a.push_back({{a1,b1},i});
    // s.insert(a[i].second);
}
sort(a.begin(),a.end());
sort(s.begin(),s.end());
vector<int>fre(n);
ordered_multiset<int>e;
for(int i=0;i<n;i++)
{
    pair<pair<int,int>,int>p=a[i];
    int ind=a[i].second;
    int l=p.first.first;
    int r=p.first.second;
    s.erase(s.begin());
    auto it1=upper_bound(s.begin(),s.end(),r);
    if(it1!=s.end())
    {
        int k=it1-s.begin();
        fre[ind]+=(k);
    }
    else{
         fre[ind]+=(int)s.size();
    }
    if(!e.empty())
    {
         auto it2=lower_bound(e.begin(),e.end(),l);
         if(it2!=e.end())
         {
            int k=distance(e.begin(), it2) ;
            int n1=e.size();
             if(*it2==l)
             {
                 fre[ind]+=(n1-k);
             }
             else
             {
                fre[ind]+=(n1-k);
             }
         }
    }
    e.insert(r);
    //cout<<l<<" "<<r<<" "<<ind<<endl;
    //auto it2=s.lower_bound(r);
}
int mini=INT_MAX;
for(int i=0;i<n;i++)
{
    mini=min(mini,fre[i]);
   // cout<<fre[i]<<" ";
}
//cout<<endl;
cout<<mini<<endl;
    return 0;
}