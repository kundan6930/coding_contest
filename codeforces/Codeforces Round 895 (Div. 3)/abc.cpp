#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(vector<int>&input2,int input1,int i,vector<int>&memo)
{
    if (i == 0) {
        return 0;
    }

    // Check if the result is already computed and stored in memo
    if (memo[i] != -1) {
        return memo[i];
    }

    // Otherwise, compute the result using recursion and store it in memo
    int res;
    if (i < 3) {
        // If i is less than 3, the only option is to jump from i-1 to i
        res = solve(input2, input1, i-1,memo) + abs(input2[i] - input2[i-1]);
    } else {
        // If i is greater than or equal to 3, the options are to jump from i-1 to i or from i-3 to i
        res = min(solve(input2, input1, i-1,memo) + abs(input2[i] - input2[i-1]), 
                  solve(input2, input1, i-3,memo) + abs(input2[i] - input2[i-3]));
    }

    // Store the result in memo and return it
    memo[i] = res;
    return res;
}

int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
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
    vector<int>memo(n+1,-1);
    cout<<solve(a,n,0,memo)<<endl;
}
    return 0;
}