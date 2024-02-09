#include <bits/stdc++.h>
using namespace std;
int sum(int n, int val)
{
  if (n < 10)
  {
    val = val + n;
    return val;
  }
  return sum(n / 10, (n % 10) + val);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    set<int>s;
   // vector<vector<int>> dp(4, vector<int>(n + 1));
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if(a[i]>9)
      {
        s.insert(i);
      }
    }
    //vector<vector<int>>me;
    while (q--)
    {
      int l, r, m, x;
      cin >> m;
      if (m == 1)
      {
        cin >> l >> r;
        l--;
        r--;
        int st=l;
        while(!s.empty())
        {
           auto it=s.lower_bound(st);
           if(it==s.end() || *it>r)
           {
             break;
           }
           //cout<<a[*it]<<endl;
           a[*it]=sum(a[*it],0);
          // cout<<a[*it]<<endl;
           int temp=*it;
           s.erase(it);
           if(a[temp]>9)
           {
             s.insert(temp);
           }
           st=temp+1;
          // cout<<a[temp]<<" "<<temp<<" "<<st<<endl;
        }
      }
      else if (m == 2)
      {
        cin >> x;
        x--;
        cout<<a[x]<<endl;
      }
    }
  }
  return 0;
}