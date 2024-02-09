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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=1;
    stack<int>st;
    st.push(a[0]);
    vector<int>ans;
    ans.push_back(1);
    while(i<n)
    {
    while(!st.empty() && st.top()<=a[i])
    {
        st.pop();
    }
    st.push(a[i]);
    int k=st.size();
    ans.push_back(k);
    i++;
    }
    for(int i=0;i<(int)ans.size();i++)
    {
       cout<<ans[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}