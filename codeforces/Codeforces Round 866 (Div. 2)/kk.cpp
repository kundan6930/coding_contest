#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    ll n=s.length();
    ll c=0;
    ll maxi=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i] =='1')
        {
          c++;
        }
        else
        {
            maxi=max(maxi,c);
          c=0;
        }
    }
     maxi=max(maxi,c);
     ll i=0;
     c=0;
     if(maxi!=n)
     {
     while(s[i]=='1')
     {
       c++;
       i++;
     }
     i=n-1;
     while(s[i]=='1')
     {
        c++;
        i--;
     }
     maxi=max(maxi,c);
     }
    // if(maxi==1)
  //   {
   //     cout<<"1"<<endl;
   //  }
     if(maxi==n)
     {
        cout<<n*n<<endl;
    }
   //  else if(maxi==0)
  //   {
  //      cout<<"0"<<endl;
 //    }
     else{
        cout<<((maxi+1)*(maxi+1))/4<<endl;
     }

}
    return 0;
}