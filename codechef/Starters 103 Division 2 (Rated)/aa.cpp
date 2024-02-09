#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define pb push_back
#define F 1000000007
#define S second
#define all(x) x.begin(), x.end()
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<string> vs;
template<typename T>
ostream& operator<<(ostream& os, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cout << a << ' '; return os; }
template<typename T>
istream& operator>>(istream& is, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cin >> a; return is; }

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<8<<endl;return;
    }

    int ans=3;
    if(n==2){
        vector<int> ss(2,0);
    for(int i=1;i<10;i++){

        for(int j=0;j<10;j++){
            int sum = i*10+j;
            int cnt=0;
            if(sum%8==0){ 
                
                    cnt+=(j!=s[n-1]-'0');
                    cnt+=(i!=s[n-2]-'0');
                    if(ans>cnt){
                        ans=cnt;

                        ss= {i,j};
                    }
        }
        cout<<ss[0]<<ss[1]<<endl;return;
    }}}
   if(n==3){
    vi v(3,0);
    for(int i=1;i<10;i++){

        for(int j=0;j<10;j++){
        
            for(int k=0;k<10;k++){
                int sum = (i*100)+(j*10)+k;
                int cnt=0;
                if(sum%8==0){ 
                    // cout<<i<<j<<k<<" "<<sum<<endl;
                    cnt+=(k!=s[n-1]-'0');
                    cnt+=(j!=s[n-2]-'0');
                    cnt+=(i!=s[n-3]-'0');
                    if(ans>cnt){
                        ans=cnt;

                        v= {i,j,k};
                    }
                }
            }
        }
    }
    cout<<v[0]<<v[1]<<v[2]<<endl;return;
   }
    // int ans=3;
    vi v(3,0);
    for(int i=0;i<10;i++){

        for(int j=0;j<10;j++){
        
            for(int k=0;k<10;k++){
                int sum = (i*100)+(j*10)+k;
                int cnt=0;
                if(sum%8==0){ 
                    // cout<<i<<j<<k<<" "<<sum<<endl;
                    cnt+=(k!=s[n-1]-'0');
                    cnt+=(j!=s[n-2]-'0');
                    cnt+=(i!=s[n-3]-'0');
                    if(ans>cnt){
                        ans=cnt;

                        v= {i,j,k};
                    }
                }
            }
        }
    }
    for(int i=0;i<n-3;i++){
        cout<<s[i];
    }
    cout<<v[0]<<v[1]<<v[2]<<endl;
}
int main(){
ll t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}