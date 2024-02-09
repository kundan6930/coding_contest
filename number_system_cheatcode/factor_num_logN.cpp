#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(int n, vector<int> &a)
{

    for (int i = 0; i <= n; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i <= n; i += 2)
    {
        a[i] = 2;
    }
    for (int i = 3; i * i <= n; i++)
    {
        if (a[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (a[j] == j)
                {
                    a[j] = i;
                }
            }
        }
    }
}
int main (){
int t;
cin>>t;
vector<int> pr(1e7 + 1);
        solve(1e7, pr);
while(t--)
{
    int n;
    cin>>n;
    vector<int>ans;
    while(n>1)
    {
        int k=pr[n];
        while(n%k==0)
        {
            ans.push_back(k);
            n/=k;
        }
    }
    if(n!=1)
    {
        ans.push_back(n);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}