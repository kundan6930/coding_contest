class Solution {
public:
using ll=long long;
    ll solve(ll c1, ll count, ll mod) {
        if (count == 0) {
            return 1;
        }

        vector<ll> faca(c1 + 1, 0);
        faca[0] = 1;

        solve7(faca, c1, mod);

        ll result = faca[c1];
        result = (1LL * result * solve2(faca[count], mod)) % mod;
        result = (1LL * result * solve2(faca[c1 - count], mod)) % mod;

        return result;
    }
    
    ll solve1(string ss1, ll k1) {
        ll mod = 1e9+7;

        vector<ll> solve6 = solv4(ss1);

        if (solve6.size() < k1) {
            return 0;
        }

        solve5(solve6);

        ll answer = 1;
        ll c1 = solve6.size();
        ll l1 = solve6[k1 - 1];
        ll tl1 = 0;
        ll cl1 = 0;

        for (ll i = 0; i < c1; i++) {
            if (i < k1) {
                answer = (1LL * answer * solve6[i]) % mod;
                if (solve6[i] == l1) {
                    cl1++;
                }
            }

            if (solve6[i] == l1) {
                tl1++;
            }
        }

        answer = (1LL * answer * solve(tl1, cl1, mod)) % mod;
        return answer;
    }

    void solve7(vector<ll>& faca, ll c1, ll mod) {
        for (ll i = 1; i <= c1; i++) {
            faca[i] = (1LL * faca[i - 1] * i) % mod;
        }
    }

    ll solve2(ll number, ll mod) {
        ll mod0 = mod;
        ll y = 0;
        ll x = 1;

        while (number > 1) {
            ll quotient = number / mod;
            ll temp = mod;
            mod = number % mod;
            number = temp;
            temp = y;
            y = x - quotient * y;
            x = temp;
        }

        if (x < 0) {
            x += mod0;
        }

        return x;
    }

    void solve5(vector<ll>& solve6) {
        sort(solve6.rbegin(), solve6.rend());
    }

    ll solve8(string ss1, ll k1) {
      
        return solve1(ss1, k1);
    }

    vector<ll> solv4(const string& ss1) {
        map<char, ll> mp1;

        for (char character : ss1) {
            mp1[character]++;
        }

        vector<ll> solve6;
        for (auto entry : mp1) {
            solve6.push_back(entry.second);
        }

        return solve6;
    }

    ll calculatetob1(vector<ll>& solve6, ll k1) {
        ll tob1 = 0;
        for (ll i = 0; i < k1; i++) {
            tob1 += solve6[i];
        }
        return tob1;
    }
};