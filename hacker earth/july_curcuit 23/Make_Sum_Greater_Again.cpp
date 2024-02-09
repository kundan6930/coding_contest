#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
int t;
cin>>t;
while(t--)
{
   ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
   ll s=0,s1=0,c=0,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=abs(a[i]);
        s1+=a[i];
        if(a[i]<0)
        {
            c++;
        }
        mini=min(mini,abs(a[i]));
    }
   // cout<<s<<" "<<mini<<endl;
   if(n==1)
   {
    if(s1>k)
    {
        cout<<"0"<<endl; 
    }
    else{
         cout<<"-1"<<endl;
    }
   }
   else if(s1>=k)
   {
     cout<<"0"<<endl;
   }
    else if(c%2==0 && s<k)
    {
       cout<<"-1"<<endl;
    }
    else if(c%2!=0 && (s-2*mini)<k )
    {
        cout<<"-1"<<endl;
    }
    else
    {
        priority_queue<pair<int, pair<int, int>>> pq; 
    int sum = 0; 
    for (int i = 0; i < n- 1; i++) {
      sum +=a[i]; 
      pq.push({abs(a[i] *a[i + 1]), {i, i + 1}}); 
    }
    sum +=a[n- 1]; 
    int count = 0;
    while (!pq.empty() && sum < k) {
     auto p = pq.top(); 
      pq.pop();
      int prod = p.first;
      int x = p.second.first; 
      int y = p.second.second;
      if (a[x] <0  || a[y] < 0) 
      { 
       a[x] *= -1; 
       a[y] *= -1;
        sum += 2 * (a[x]+a[y]); 
        count++; 
      }
    }
     if (sum >= k) 
     { 
      cout << count << endl; 
    } 
    else 
    {
      cout << -1 << endl; 
    }
    }
}
    return 0;
}