#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<int>a, int n,vector<int>&b)
{
    
   b.push_back(-1);
 
   
    for (int i = 1; i < n; i++) {
       
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (a[j] < a[i]) 
            {
                b.push_back(a[j]);
                break;
            }
        }
        if (j == -1)
            b.push_back(-1);
    }
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n),b;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // mini=min(mini,a[i]);
        // b[i]=mini;
    }
    solve(a,n,b);
    int ans=-1,i;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    for( i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            ans=i;
            break;
        }
    }
    if(ans==-1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int k1=a[ans];
        int c=0;
         for(int j=ans+1;j<n;j++)
         {
            if(k1==b[j])
            {
               c++;
            }
         }
         cout<<c<<endl;
    }
    
}
    return 0;
}
