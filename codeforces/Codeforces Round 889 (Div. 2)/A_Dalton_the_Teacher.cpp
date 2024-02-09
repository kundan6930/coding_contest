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
int c=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
         if(k==(i+1))
         {
            c++;
         }
    }
    if(c%2==0)
    {
        cout<<c/2<<endl;
    }
    else{
        cout<<(c/2)+1<<endl;
    }

}
    return 0;
}