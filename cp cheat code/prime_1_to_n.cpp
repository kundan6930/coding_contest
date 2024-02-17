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
    vector<bool>prm(n+1,true);
     vector<int>ans;
    for(int i=2;i<=n;i++)
    {
        if(prm[i]==true)
        {
            for(int j=i+i;j<=n;j+=i)
            {
                prm[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prm[i])
        {
            ans.push_back(i);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
    return 0;
}