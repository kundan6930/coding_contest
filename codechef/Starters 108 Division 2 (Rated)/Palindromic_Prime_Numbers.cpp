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
    if(n<=4)
    {
        cout<<"0"<<" "<<n<<endl;
    }
    else{
        cout<<"1"<<" "<<n-1<<endl;
    }

}
    return 0;
}