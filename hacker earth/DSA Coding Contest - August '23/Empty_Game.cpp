#include <bits/stdc++.h>
using namespace std;
using ll=long long;
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
    sort(a.begin(),a.end());
    int c=0,i;
    for( i=0;i<n-1;)
    {
        if(a[i+1]-a[i]<=2)
        {
            c++;
            i+=2;
        }
        else{
            c++;
            i++;
        }
    }
    if(i==n-1)
    {
        c++;
    }
    cout<<c<<endl;
}
    return 0;
}