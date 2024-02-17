#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int k,int m)
{
    if(k<10)
    {
        return true;
    }
    
    return false;
}
int main (){
int n;
cin>>n;
int ans=0;
for(int i=0;i<n;i++)
{
    int p;
    cin>>p;
    if(i+1<=p && i+1<10)
    {
        ans++;
    }
    if((i+1)*10+(i+1)<=p && i+1<10)
    {
        ans++;
    }
    if(i+1>=10)
    {
        for(int j=1;j<=9;j++)
    {
        if(i+1==10*j+j)
        {
            if(p>=j)
            {
                ans++;
            }
            if(p>=10*j+j)
            {
                ans++;
            }
        }
    }
    }
}
cout<<ans<<endl;
    return 0;
}