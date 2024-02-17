#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int m;
bool solve(int pos,int pos1,multiset<int>&a, string&l,string&r,int last)
{
    if(pos==m )
    {
        return false;
    }
     bool ans=false;
    for(int i=l[pos]-'0'; i<=r[pos]-'0';i++)
    {
        
        auto it=lower_bound(a.begin(),a.end(),i);
       // cout<<i<<" "<<pos<<" "<<*it<<endl;
        if(it==a.end() || *it!=i)
        {
           return true; 
        }
        if(*it==i)
        {
            int k= distance(a.begin(), it);
            a.erase(it);
           // cout<<k<<" "<<i<<endl;
            if(k+pos+1<=last)
            {
                return true;
            }
            ans|=solve(pos+1,i,a,l,r,k);
        }  
    }
    return ans;
}
int main (){
int t;
cin>>t;
while(t--)
{
    string s;
     cin>>s;
    // cout<<s<<endl;
      multiset<int>a;
    for(int i=0;i<s.length();i++)
    {
      //  cout<<s[i]-'0'<<endl;
        a.insert(s[i]-'0');
    }
   
    cin>>m;
    string l,r;
    cin>>l;
    cin>>r;
    bool ans=solve(0,0,a,l,r,-1);
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}