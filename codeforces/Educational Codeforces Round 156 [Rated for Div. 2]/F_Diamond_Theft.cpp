#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    ll pos;
    cin>>pos;
    stack<pair<char,int>>st;
    st.push({s[0],0});
    int i=1;
    int n=s.length();
    vector<int>a;
    while(i<n)
    {
        if(!st.empty() && s[i]<st.top().first)
        {
              a.push_back(st.top().second);
              st.pop();
        }
        st.push({s[i],i});
    }
    while(!st.empty())
    {
         a.push_back(st.top().second);
         st.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}