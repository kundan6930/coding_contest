#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(2,0));
    for(int i=0;i<n;i++)
    {
        cin>>a[i][1];
        cin>>a[i][0];
    }
    sort(a.begin(),a.end());
    //int s=a[0][1];
    int e=a[0][0];
    int j=1,c=1;
    while(j<n)
    {
        if(e<=a[j][1])
        {
            c++;
            e=a[j][0];
        }
        j++;
    }
    cout<<c<<endl;
    return 0;
}