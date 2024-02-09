#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       int n;
       cin>>n;
       string s;
       cin>>s;
       int f=0;
       vector<int>a(26,0);
       for(int i=0;i<n;i++)
       {
         if(i%2==0)
         {
            if(a[s[i]-'a']==0)
            {
                a[s[i]-'a']=2;
            }
            else if(a[s[i]-'a']==1)
            {
                f=1;
                break;
            }
         }
         else
         {
            if(a[s[i]-'a']==0)
            {
                a[s[i]-'a']=1;
            }
            else if(a[s[i]-'a']==2)
            {
                f=1;
                break;
            }
         }
       }
     if(f==0)
     {
        cout<<"YES"<<endl;
     }
     else{
            cout<<"NO"<<endl;
     }

        
    }
    return 0;
    }