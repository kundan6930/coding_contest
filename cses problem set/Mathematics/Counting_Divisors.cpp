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
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                c++;
            }
            else
            {
              c+=2;
            }
        }
    }
    cout<<c<<endl;
}
    return 0;
}