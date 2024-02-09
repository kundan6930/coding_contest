#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INV_6 = 166666668;

int memo[151][61][11][101][3];

void addMod(int& a, int b) {
    if (a < 0)
        a += MOD;
    a += b;
    if (a >= MOD)
        a -= MOD;
}

int calculate(int stones, int black, int whiteLeft, int removed, int state) {
    if (stones == 0)
        return removed == 0;

    if (black == 0 || whiteLeft == 0)
        return 0;

    if (memo[stones][black][whiteLeft][removed][state] != -1)
        return memo[stones][black][whiteLeft][removed][state];

    int answer = 0;

    for (int i : {6, 4, 3, 2, 1}) {
        bool isSameState = (black % 6 == 1 && (i == 1 || i == 3)) || (black % 6 != 1 && i != 1 && i != 3);
        if (state == 1)
            addMod(answer, calculate(max(0LL, stones - i), black - 1, whiteLeft, max(0LL, removed - i), isSameState));
        else
            addMod(answer, calculate(max(0LL, stones - i), black - 1, whiteLeft, removed, state == 2 ? 2 : !isSameState));
    }

    if (state == 0)
        addMod(answer, calculate(stones, black - 1, whiteLeft - 1, removed, black % 6 == 1));
    else if (state == 1) {
        if (removed == 0)
            addMod(answer, calculate(stones, black - 1, whiteLeft - 1, removed, 2));
    } else
        addMod(answer, calculate(stones, black - 1, whiteLeft - 1, removed, 2));

    return memo[stones][black][whiteLeft][removed][state] = answer ;
}

void solve() {
    int totalStones, blackStones, whiteStonesLeft, removedStones;
    cin >> totalStones >> blackStones >> whiteStonesLeft >> removedStones;
    cout << calculate(totalStones, blackStones, 10 - whiteStonesLeft, 100 - removedStones, 1) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memset(memo, -1, sizeof(memo));

    int testCases;
    cin >> testCases;
    while (testCases--)
        solve();
}
