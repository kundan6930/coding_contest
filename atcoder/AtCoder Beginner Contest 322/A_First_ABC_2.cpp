#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string s;
cin>>s;
size_t pos = s.find("ABC");
  if (pos != string::npos)
  {
    cout<<pos+1<<endl;
  }
  else{
    cout<<"-1"<<endl;
  }
    return 0;
}