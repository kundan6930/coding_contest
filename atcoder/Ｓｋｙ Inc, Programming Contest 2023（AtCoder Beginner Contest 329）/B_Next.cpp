#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];

}
map<int, int> mp; 
    for(int i = 0; i < n; i++)
    { 
        mp[a[i]]++; 
    } 
    int size = 1; 
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
    { 
        if(size == 2)
        { 
            cout <<it->first<<endl; 
            break; 
        } 
        size++; 
    } 
    return 0;
}