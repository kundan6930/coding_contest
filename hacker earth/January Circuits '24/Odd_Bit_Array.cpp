#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;
// def
//#define kundan1 1
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define Mod 1000000007
#define Mod1 998244353
#define inf 1e18
#define nline "\n"
#define vec vector
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define py cout<<"YES\n";
#define pm1 cout<<"-1\n";
#define pn cout<<"NO\n";
#define pll pair<ll, ll>
#define pdd pair<ld, ld>
#define pii pair<int, int>
#define all0(m) m.begin(), m.end()
#define rall0(m) m.rbegin(), m.rend()
#define sz(x) ((int)(x).size())
#define all(x,i) (x).begin()+i, (x).end()
#define rall(x,i) (x).rbegin()+i, (x).rend()
#define fl0(i,n) for(ll i=0;i<=n;i+=1)
#define fl(i,m,n,k) for(ll i=m;i<=n;i+=k)
#define flr(i,n,m,k) for(ll i=n;i>=m;i-=k)
//Debug
#ifdef kundan1
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

//TypeDEf
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vec<int> vi ;
typedef vector<ll> vl;
typedef vec<pii> vpi ;
typedef vector<pll> vpl;
typedef vector<string> vs;
typedef vec<vec<int>> vvi;
typedef vec<vec<ll>> vvl;
typedef vec<vec<string>> vvs;
typedef vec<vec<vec<int>>> vvvi;
typedef map<ll,ll> ml;
typedef unordered_map<ll,ll> uml;
typedef set<ll> sl;
typedef multiset<ll> msl;

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
//typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);} // for prime b;
vl factorial(ll n){vl fact(n+1);fact[0]=1;fl(i,1,n,1){fact[i]=fact[i-1]*i; fact[i]%=Mod;} return fact; }
vl invfactorial(ll n,ll *fact,ll mod){vl ifact(n+1);fl(i,0,n,1){ifact[i]=mminvprime(fact[i],mod); }return ifact;}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
/*--------------------------------------------------------------------------------------------------------------------------*/

ll solve1(ll n)
{
  ll c = 0;
  while (n > 0)
  {
    c += (n & 1);
    n /= 2;
  }
  return c;
}
const ll m = 1e5 + 2;
ll dp[m][3];
ll solve2(vl &b, vl &c, ll pos, ll prev)
{
  if (pos < 0)
  {
    if (prev == 1)
    {
      return 1;
    }
    return 0;
  }
  if (dp[pos + 1][prev + 1] != -1)
  {
    return dp[pos + 1][prev + 1];
  }
  ll s = 0;
  if (prev == -1)
  {
    if (b[pos] == 1 && c[pos + 1] == 1)
    {
      s += solve2(b, c, pos - 1, b[pos]);
    }
    s += solve2(b, c, pos - 1, prev);
  }
  else
  {
    if (prev != b[pos])
    {
      s += solve2(b, c, pos - 1, b[pos]);
    }
    s += solve2(b, c, pos - 1, prev);
  }
  s %= Mod;
  return dp[pos + 1][prev + 1] = s;
}
void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vl a(n), b(n), c(n + 1);
    ll xr = 0;
    ll ans = 0;
    fl(i, 0, n - 1, 1)
    {
      cin >> a[i];
      xr = xr ^ a[i];
      if (solve1(xr) % 2 == 0)
      {
        b[i] = 0;
      }
      else
      {
        b[i] = 1;
      }
    }
    xr = 0;
    flr(i, n - 1, 0, 1)
    {
      xr = xr ^ a[i];
      if (solve1(xr) % 2 == 0)
      {
        c[i] = 0;
      }
      else
      {
        c[i] = 1;
      }
    }
    c[n] = 1;
    memset(dp, -1, sizeof(dp));
    ans = solve2(b, c, n - 1, -1);
    cout << ans << endl;
  }
}

int main()
{
  fastio();
  auto start1 = high_resolution_clock::now();
  solve();
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef kundan1
  cerr << "Time: " << duration.count() / 1000 << endl;
#endif
}