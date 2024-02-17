#include <bits/stdc++.h>
using namespace std;
using ll=long long;

   ll solve(set<pair<int,int>>&nums,int c)
     {
        if(nums.empty()) 
        {   
            return 0;
        }
        ll maxi=0;
        auto it=1;
         for(auto i=nums.begin();i!=nums.end();i++)
         {  
            if(i==nums.begin())
            {
                continue;
            }
            auto it1=nums.begin();
           pair<int,int> p1=*it1;
            ll k1=p1.first;
            ll s1=p1.second;
            pair<int,int> p2=*i;
            ll k2=p2.first;
            ll s2=p2.second;
            nums.erase({p1});
            nums.erase({p2});
            cout<<k1<<" "<<k2<<endl;
             maxi= max(maxi,solve(nums,c+1)+c*(k1&k2));
              cout<<k1<<" "<<k2<<" "<<maxi<<endl;
              nums.insert( {k1,s1});
              nums.insert( {k2,s2});
         }
         return maxi;
     }
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
set<pair<int,int>>s;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    s.insert({a[i],i});
}
cout<<solve(s,1)<<endl;

    return 0;
}