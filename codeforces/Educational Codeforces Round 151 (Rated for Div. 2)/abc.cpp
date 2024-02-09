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
    vector<int>a(n);
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    int p;
    cin>>p;
    vector<int>b(p);
    for(int i=0;i<p;i++)
    {
        cin>>b[i];    
    }
//    for (auto it = s.begin(); it != s.end(); ++it)
//    {
//      cout <<*it<<" ";
//     }
//      cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        
    }


}
    return 0;
}