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
    string s;
    cin>>s;
    int i=0,j=n-1;
    int c=0;
    while(i<j)
    {
       if(s[i]!=s[j])
       {
        c++;
       }
       i++;
       j--;
    }
 // cout<<c<<endl;
    vector<int>a(n+1);
    i=0,j=n;
    while(i<=j)
    {
        if(n%2!=0)
        {
            if(i<c)
            {
                a[i]=0;
                a[j]=0;
            }
            else{
                a[i]=1;
                a[j]=1;
            }
        }
        else
        {
            if(i<c)
            {
                a[i]=0;
                a[j]=0;
            }
            else
            {
                if(c%2==0)
                {
               if(i%2==0)
               {
                  a[i]=1;
                  a[j]=1;
               }
              else
               {
                  a[i]=0;
                  a[j]=0;
               }
                }
                else{
                    if(i%2!=0)
               {
                  a[i]=1;
                  a[j]=1;
               }
              else
               {
                  a[i]=0;
                  a[j]=0;
               }
                }
            }
        }
        i++;
        j--;
    }
    for(int i=0;i<=n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;

}
    return 0;
}