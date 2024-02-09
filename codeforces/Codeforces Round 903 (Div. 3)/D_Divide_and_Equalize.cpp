#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(int n, vector<int> &a)
{

    for (int i = 0; i <= n; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i <= n; i += 2)
    {
        a[i] = 2;
    }
    for (int i = 3; i * i <= n; i++)
    {
        if (a[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (a[j] == j)
                {
                    a[j] = i;
                }
            }
        }
    }
}
int main (){
int t;
cin>>t;
 vector<int> pr(1e6+ 1);
        solve(1e6, pr);
while(t--)
{
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int k = a[i];
            while (k != 1)
            {
                int c = pr[k];
                mp[c]++;
                k /= c;
            }
        }
        int f=0;
        for (auto i : mp)
        {
            if (i.second %n!=0)
            {
               f=1; 
               break;
            }
        }
        if(f==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
}
    return 0;
}