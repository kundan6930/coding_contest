#include <iostream>
using namespace std;

int mod(int x, int m)
{
    return (x % m + m) % m;
}

int solve(int A, int B, int C)
{

    int dp[A + 1][C + 1];

    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= C; j++)
        {
            dp[i][j] = 0;
        }
    }

    for (int j = 0; j <= C; j++)
    {
        dp[1][j] = 1;
    }

    for (int i = 2; i <= A; i++)
    {

        for (int j = 0; j <= C; j++)
        {

            if (j == 0)
            {
                dp[i][j] = mod(dp[i - 1][j] * B, 998244353);
            }

            else
            {
                dp[i][j] = mod(dp[i - 1][j - 1] * (B-1), 998244353);
            }
        }
    }

    return dp[A][C];
}

int main()
{

    int A, B, C;
    cin >> A >> B >> C;

    cout << solve(A, B, C) << endl;
    return 0;
}
