#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int n)
{
    int k=-1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
          k=i;
          break;
        }
    }
    return k;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int l,r;
    cin>>l>>r;
    if(r<=3 || (l==r && solve(l)==-1))
    {
        cout<<"-1"<<endl;
    }
    else
    {
       
        if(r==l)
        {
            int k2=solve(l);
            cout<<k2<<" "<<l-k2<<endl;
        }
         else if(l<=4)
        {
          cout<<"2"<<" "<<"2"<<endl;
        }
        else{
        int k;
        if(l%2==0)
        {
          k=l;
        }
        else{
            k=l+1;
        }
       int k1=solve(k);
            cout<<k1<<" "<<k-k1<<endl;
        }
    }
        

}
    return 0;
}