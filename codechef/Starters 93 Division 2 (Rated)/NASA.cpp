#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int>p;
// this function is to check nubmer is palindrome or not
bool pal(int n)
{
    vector<int>a;
    while(n>0)
    {
        a.push_back(n%10);
        n/=10;
    }
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    int i=0,j=a.size()-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            return false;
        }
        i++,j--;
    }
    return true;
}
// this fuction is store all palindrome from 0 to 2^15
// there are total 10(1 digit)+9(2 digit)+90(3 digit)+90(4 digit)+aprox(400) for( 5 digit till 2^15)=599 total palindrome
void solve1(int n1)
{
  for(int i=0;i<=n1;i++)
  {
     if(pal(i))
      {
        p.push_back(i);
      }
  }
}
int main (){
int t;
solve1(32768);
cin>>t;
while(t--)
{  
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    // for(int i=0;i<p.size();i++)
    // {
    //     cout<<p[i]<<" ";
    // }
    // cout<<endl;
    vector<int>fre(32768+1,0);
    // fre store the frequency of all number of array a
    for(int i=0;i<n;i++)
    {
        fre[a[i]]++;
    }
    ll ans=0,c=0;
    // outer loop will run 599 times and inner loop will run "n" times so, total complexity=n*599
    // outer loop is checking for each palindrome no how many pair exits in array a
    // for eg :- for 0 how many pair exits in array a and so on.To find that do k=a[i]^0 and add fre[k] in ans;
      for(int i=0;i<p.size();i++)
    {  
        c=0;
         for(int j=0;j<n;j++)
        {
            int temp=p[i]^a[j];
            c+=(ll)fre[temp];
            // if(fre[temp]>0)
            // {
            //     // if(temp!=a[i])
            //     // {
            //     //     c++;
            //     // }
            //  //   fre[temp]--;
            // }
            
           // cout<<temp<<" "<<ans<<endl;
        }
        if(i)
        {
            // c/2 is to handle a^b=k && b^a=k so we are counting twice;
            c=c/2;
        }
        ans+=c;
       // cout<<ans<<" "<<"*"<<endl;
    }
   // ans-=(c/2);
  ll c1=0;
  // this loop to handle dulicates like 2,2,2
   for(int i=0;i<fre.size();i++)
   {
     if(fre[i]>1)
     {
        ll k=fre[i]-1;
        c1+=(k*(k+1))/2;
     }
   }
   ans=ans-c1;
   cout<<ans<<endl;
}
    return 0;
}