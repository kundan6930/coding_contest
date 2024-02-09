#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int> solve(ll n)
{
    vector<int>a(n+1,1),ans;
        
        a[0] = 0, a[1] = 0;
       
        for (int i = 2; i * i <= n; i++)
        {
            if (a[i])
            {
                
                for (int j = i * i; j <= n; j += i)
                {
                    a[j] = false;
                }
            }
        }
        int maxi=0;
        for(int i=0;i<=n;i++)
        {
            if(a[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
}
int solve1(int k)
{
    int k1=k;
    int c=1;
    int f=0;
    int c1=0;
     while(k1>=0)
     {
        if(k1==0)
        {
            f=1;
            break;
        }
        k1-=c;
        c*=2;
        c1++;
        //cout<<k1<<endl;
     }
     if(f==1)
     {
        return c1;
     }
     else{
        return INT_MAX;
     }
}
int main (){
int t;
cin>>t;
vector<int>p=solve(1e6);
while(t--)
{
    int n;
    cin>>n;
    
    int n1=p.size();
    int k2=solve1(n);
   // cout<<k2<<endl;
    int mini=INT_MAX;
    if(k2!=INT_MAX)
    {
       mini=k2;
    }
    for(int i=0;i<n1;i++)
    {
        int k=n-p[i];
        int k1=solve1(k);
       // cout<<k1<<" "<<k<<endl;
        if(k1!=INT_MAX)
        {
           mini=min(mini,k1+1);
        }
    }
    if(mini==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<mini<<endl;
    }
}
    return 0;
}