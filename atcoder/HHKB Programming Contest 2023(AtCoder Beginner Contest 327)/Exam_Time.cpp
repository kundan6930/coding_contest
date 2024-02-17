#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int x,y,z,t;
cin>>x>>y>>z>>t;
int k=x/t;
cout<<min(k,y)*z<<endl;
  return 0;
}