#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    float k=(float)n-((float)n/(float)10);
    if(k==(float)m)
    {
        cout<<"EITHER"<<endl;
    }
    else if(k<(float)m)
    {
        cout<<"ONLINE"<<endl;
    }
    else
    {
        cout<<"DINING"<<endl;
    }

}
    return 0;
}