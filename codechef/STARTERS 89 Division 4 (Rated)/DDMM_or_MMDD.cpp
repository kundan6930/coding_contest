#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    string s1,s2;
    s1+=s[0];
    s1+=s[1];
    s2+=s[3];
    s2+=s[4];
    int k1=stoi(s1);
    int k2=stoi(s2);
    //cout<<k1<<" "<<k2<<" "<<s1<<" "<<s2<<endl;
    if(k1<=12 && k2<=12 && k1>=0 && k2>=0)
    {
        cout<<"BOTH"<<endl;
    }
    else if(k1<=12 && k1>=0 && k2>12 && k2<=30)
    {
        cout<<"MM/DD/YYYY"<<endl;
    }
    else{
        cout<<"DD/MM/YYYY"<<endl;
    }

}
    return 0;
}