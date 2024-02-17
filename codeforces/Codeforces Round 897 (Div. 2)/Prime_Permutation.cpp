#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(int n,vector<int>&a)
{ 
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
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>b(n+1,1);
    solve(n,b);
    // for(int i=0;i<b.size();i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    int s=0,e=0;
    for(int i=0;i<=n;i++)
    {
        if(b[i] && b[n-i])
        {
            s=i;
            e=n-i;
            break;
        }
    }
    if(s==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
    //    if(n%2==0)
    //    {
    //       vector<int>a(n+1);
    //       for(int i=1;i<=n-2;i++)
    //       {
    //         if(a[i]==0 && a[i+2]==0)
    //         {
    //           a[i]=i+2;
    //           a[i+2]=i;
    //         }
    //       }
    //       for(int i=1;i<=n;i++)
    //       {
    //         cout<<a[i]<<" ";
    //       }
    //       cout<<endl;
    //    }
    //    else
    //    {
         int i=n;
         vector<int>ans(n);
         int c=1;
        // cout<<s<<endl;
         for(int i=0;i<n;i++)
         {
            ans[(i+s)%n]=c;
            c++;
         }
         for(int i=0;i<n;i++)
         {
            cout<<ans[i]<<" ";
         }
            cout<<endl;
       //}
    }

}
    return 0;
}