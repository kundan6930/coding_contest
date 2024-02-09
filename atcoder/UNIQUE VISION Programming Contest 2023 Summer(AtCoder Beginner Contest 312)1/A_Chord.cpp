#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<string>a;
a.push_back("ACE");
a.push_back("BDF");
a.push_back("CEG");
a.push_back("DFA");
a.push_back("EGB");
a.push_back("FAC");
a.push_back("GBD");
 string s;
 cin>>s;
 int f=0;
 for(int i=0;i<a.size();i++)
 {
    if(a[i]==s)
    {
          f=1;
          break;
    }
        
 }
 if(f==1)
 {
    cout<<"Yes"<<endl;
    }

    else
    {
         cout<<"No"<<endl; 
    }

    return 0;
}