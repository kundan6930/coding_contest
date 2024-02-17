#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m,s1,e1,s2,e2;
string s;
/*bool issafe(int i,int j)
{
   if(i<1 || i>n || j<1 || j>m)
   {
    return false;
   }
   return true;
}*/
int solve()
{  
    int i=s1,j=e1,ans=0,x,y;
    map<vector<int>,bool>vis;
    string ss=s;
    if (ss == "DR") {
		x = 1;
		y = 1;
	}
	else if (ss == "DL") {
		x = 1;
		y = -1;
	}
	else if (ss == "UR") {
		x = -1;
		y = 1;
	}
	else {
		x = -1;
		y = -1;
	}
    while(true)
    {
   /*   if((i==s2 && j==e2) &&(s1!=i && j!=e1))
      {
        return ans;
      }
      */
     //cout<<ans<<" "<<i<<" "<<j<<endl;
     if(vis[{i,j,x,y}])
     {
        return -1;
     }
     vis[{i,j,x,y}]=true;
      if((i==s2 && j==e2) )
        {
             return ans;
        }
      if ((i + x == 0 || i + x == n + 1) && (j + y == 0 || j + y == m + 1)) 
      {
			x *= -1;
			y *= -1;
			ans++;
	 }
        
		else if (i + x == 0 || i + x == n + 1) 
        {
			x *= -1;
			ans++;
		}
		else if (j + y == 0 || j + y == m + 1) 
        {
			y *= -1;
			ans++;
		}
		i += x;
		j += y;      
    }
    return -1;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      cin>>n>>m>>s1>>e1>>s2>>e2>>s;
      cout<<solve()<<endl; 
    }
    return 0;
    }