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
    int s=0, mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        mini=min(mini,a[i]);
    }
    cout<<s-mini<<endl;

}
    return 0;
}