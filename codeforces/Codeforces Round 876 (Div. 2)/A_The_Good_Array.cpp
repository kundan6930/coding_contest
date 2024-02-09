#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int i=0,j=n-1;
    int c=0;
    int mini=INT_MAX;
    while(i<n)
    {
        int left=(i+k-2)/k;
        int right=(n-i+k-1)/k;
        mini=min(mini,left+right);
        i++;
    }
  cout<<mini+1<<endl;
}
    return 0;
}