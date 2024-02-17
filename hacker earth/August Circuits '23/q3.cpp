#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int n, m;
    cin >> n >> m;
    int b;
    cin >> b;
 vector<vector<int>>a(n+1, vector<int>(m+1));
    for (int i = 0; i < b; ++i) 
    {
        int x, y;
        cin >> x >> y;
        a[x+1][y+1]=-1;
    }
    int maxi=0,mini;
    for(int i=1;i<=n;i++)
    {
        vector<int>pos;
        pos.push_back(0);
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==-1)
            {
              pos.push_back(j);
            }
        }
        pos.push_back(m+1);
        for(int j=0;j<pos.size()-1;j++)
        {
            maxi+=((pos[j+1]-pos[j])/2);
            // if(pos[j+1]-pos[j]==2)
            // {
            //     mini+=1;
            // }
            // else
            // {
            // mini+=(((pos[j+1]-pos[j]-1)/2));
            // }
        }
    }
    mini=(n * m + 1) / 2;
    cout<<maxi<<" "<<mini<<endl;

    return 0;
}
