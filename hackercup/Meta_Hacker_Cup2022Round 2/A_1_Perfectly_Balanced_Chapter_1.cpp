#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
    #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif
int t;
cin>>t;
int t1=t;
while(t--)
{
    string s;
    cin>>s;
    int n=s.length();
    vector<vector<int>>pre(n+1);
    vector<int>fre(26,0);
    pre[0]=fre;
    for(int i=0;i<n;i++)
    {
         fre[s[i]-'a']++;
         pre[i+1]=fre;
    }
    int q;
    cin>>q;
    int ans=0;
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
       // cout<<l<<" "<<r<<endl;
        vector<int>le(26),ri(26),le1(26),ri1(26);
        int mid=(l+r)/2;
        for(int j=0;j<26;j++)
        {
            le[j]=pre[mid][j]-pre[l-1][j];
            ri[j]=pre[r][j]-pre[mid][j];
            le1[j]=pre[mid-1][j]-pre[l-1][j];
            ri1[j]=pre[r][j]-pre[mid-1][j];
        } 
        int c1=0,c2=0;
        for(int j=0;j<26;j++)
        {
            c1+=abs(ri[j]-le[j]);
            c2+=abs(ri1[j]-le1[j]);
        }
        cout<<c1<<" "<<c2<<endl;
        if(c1==1 || c2==1)
        {
            ans++;
        }
    }
    cout<<"Case #"<<t1-t<<": "<<ans<<endl;


}
    return 0;
}