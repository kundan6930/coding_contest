#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int m=1e9+7;
int solve(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
       return ((ll)solve(n/2)*(ll)solve(n/2))%m;
    }
    else
    {
        return (2*(solve(n-1)))%m;
    }
}
int main (){

    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}