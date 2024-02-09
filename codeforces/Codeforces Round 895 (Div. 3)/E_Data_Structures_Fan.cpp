#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n),pre(n+1,0);
    int k0=0,k1=0;
    char ch;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pre[i+1]=pre[i]^a[i];   
    }
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='0')
        {
            k0^=a[i];
        }
        else{
            k1^=a[i];
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int c1;
        cin>>c1;
        if(c1==1)
        {
            int l,r;
            cin>>l>>r;
              k0=k0^(pre[l-1]^pre[r]);
              k1=k1^(pre[l-1]^pre[r]);
        }
        else{
            int a1;
            cin>>a1;
            if(a1==1)
            {
              cout<<k1<<" ";
            }
            else{
               cout<<k0<<" ";
            }

        }
        

    }
    cout<<endl;

}
    return 0;
}