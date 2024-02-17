#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n1 = 2 * 1e6;
void smallest_prime_factor(vector<ll> &fact)
{
    for (ll i = 0; i <= n1; i++)
    {
        fact[i] = i;
    }
    for (ll i = 2; i * i <= n1; i++)
    {
        if (fact[i] == i)
        {
            for (ll j = i; j <= n1; j += i)
            {
                if (fact[j] == j)
                {
                    fact[j] = i;
                }
            }
        }
    }
}
ll pow(ll exp, ll base)
{
    if (exp == 0)
    {
        return 1;
    }
    if (exp % 2 == 0)
    {
        ll y = pow(exp / 2, base);
        return y * y;
    }
    else
    {
        return base * pow(exp - 1, base);
    }
}
ll kLargest(vector<ll>&arr, ll n, ll k)
    { 
        priority_queue<ll, vector<ll>, greater<ll> > q;
        ll ans=0;
        
        for(ll i = 0; i < n;i++)
        {
            if(q.size() == k)
            { 
                if(q.top() < arr[i])
                { 
                    q.pop();   
                    q.push(arr[i]);  
                }
            }
            else
            {
                q.push(arr[i]);
            }
        }
        while(!q.empty())
        {
          ans+=q.top();
           q.pop(); 
        }
        return ans;
    }
int main()
{
    ll t;
    cin >> t;
    vector<ll> fact(n1 + 1);
    smallest_prime_factor(fact);
    vector<ll> sum_factor(n1 + 1);
    for (ll i = 1; i <= n1; i++)
    {
        ll p = 1;
        ll k1 = i;
        while (k1 > 1)
        {
            ll k2 = fact[k1];
            ll sum = 1;
            ll c1 = 0;
            while (k1 % k2 == 0)
            {
                c1 += 1;
                sum += (pow(c1, k2));
                k1 /= k2;
            }
            p *= sum;
        }
        sum_factor[i] = p;
        // cout<<p<<endl;
    }
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        vector<ll> bb(n + 1);
        for (ll i = 0; i <= n; i++)
        {
            bb[i] = sum_factor[i];
        }
       ans= kLargest(bb,n+1,m);
        // for (ll i = n; i > n - m; i--)
        // {
        //     ans += bb[i];
        // }
        cout << ans << endl;
    }
    return 0;
}