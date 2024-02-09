#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
    string s;
    cin>>s;
    int maxi=1;
    int c=1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            maxi=max(maxi,c);
            c=1;
        }
        else{
            c++;
        }
    }
    maxi=max(maxi,c);
    cout<<maxi<<endl;
    return 0;
}