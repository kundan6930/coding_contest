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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int c=1,maxi=0;;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<=k)
        {
            c++;
        }
        else{
            maxi=max(maxi,c);
            c=1;
        }
    }
   maxi=max(maxi,c);
   cout<<n-maxi<<endl;

}
    return 0;
}