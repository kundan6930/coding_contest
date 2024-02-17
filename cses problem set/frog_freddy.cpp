#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n,m;
cin>>n>>m;
string s;
cin>>s;
vector<vector<int>>a(n,vector<int>(2));
set<pair<int,int>>st;
for(int i=0;i<n;i++)
{
    cin>>a[i][0];
    cin>>a[i][1];
    st.insert({a[i][0],a[i][1]});
}
int x=a[0][0];
int y=a[0][1];
for(int i=0;i<m;i++)
{
    if(s[i]=='A')
    {
        auto it=st.find({x,y}); 
        it++;
        for(auto i=it;i!=st.end();i++)
        {
            pair<int,int>p=*i;
            if(p.first-x==p.second-y)
            {
                st.erase({x,y});
                x=p.first;
                y=p.second;
                break;
                
            }
            
        }
    }
    else if(s[i]=='B')
    {
        auto it=st.find({x,y}); 
        it++;
        for(auto i=it;i!=st.end();i++)
        {
            pair<int,int>p=*i;
            if(p.first-x==y-p.second)
            {
                 st.erase({x,y});
                x=p.first;
                y=p.second;
                break;
                 
            }
            
        }
    }
    else if(s[i]=='C')
    {
        auto it=st.find({x,y}); 
            if(it==st.begin())
            {
                break;
            }
        it--;
        for(auto i=it;;i--)
        {
            pair<int,int>p=*i;
            if(x-p.first==p.second-y)
            {
                st.erase({x,y});
                x=p.first;
                y=p.second;
                  break;
            }
            if(i==st.begin())
            {
                break;
            }
            
        }
    }
    else if(s[i]=='D')
    {
        auto it=st.find({x,y}); 
           if(it==st.begin())
            {
                break;
            }
        it--;
        for(auto i=it;;i--)
        {
            pair<int,int>p=*i;
            if(x-p.first==y-p.second)
            {
                  st.erase({x,y});
                x=p.first;
                y=p.second;
                break;
            }
            if(i==st.begin())
            {
                break;
            }
        }
    }
    cout<<x<<" "<<y<<" "<<s[i]<<endl;
}
cout<<x<<" "<<y<<endl;


    return 0;
}