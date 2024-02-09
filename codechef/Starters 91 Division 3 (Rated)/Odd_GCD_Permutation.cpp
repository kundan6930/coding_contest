#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int i=n;
        int j=n-1;
        while(i>=2)
        {
            cout<<i<<" "<<j<<" ";
            i-=2;
            j-=2;
        }
        cout<<endl;
    }
}
    return 0;
}