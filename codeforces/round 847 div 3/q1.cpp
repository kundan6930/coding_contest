#include <bits/stdc++.h>
using namespace std;
string s="314159265358979323846264338327950288419716939937510";

int main (){
    int t;
    cin>>t;
    while(t--)
    {   
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==s[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}