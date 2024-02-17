#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int c=0;
bool safe(char a[][8],int r,int c)
{
    for(int i=0;i<8;i++)
    {
        if(i!=c && a[r][i]=='#')
        {
            return false;
        }
    }
    for(int i=0;i<8;i++)
    {
        if(i!=r && a[i][c]=='#')
        {
            return false;
        }
    }
    int i=r-1,j=c-1;
    while(i>=0 && j>=0)
    {
       if(a[i][j]=='#')
       {
        return false;
       }
       i--;
       j--;
    }
    i=r+1,j=c+1;
    while(i<8 && j<8)
    {
       if(a[i][j]=='#')
       {
        return false;
       }
       i++;
       j++;
    }
    i=r-1,j=c+1;
    while(i>=0 && j<8)
    {
       if(a[i][j]=='#')
       {
        return false;
       }
       i--;
       j++;
    }
    i=r+1,j=c-1;
    while(i<8 && j>=0)
    {
       if(a[i][j]=='#')
       {
        return false;
       }
       i++;
       j--;
    }
    return true;
}
 void solve(char a[][8],int pos)
 {
     if(pos==8)
     {
       c++;
       return;
     }
     for(int i=0;i<8;i++)
     {
        if(a[pos][i]!='*')
        {
            
            if(safe(a,pos,i))
            {
                a[pos][i]='#';
                solve(a,pos+1);
                a[pos][i]='.';
            }
        
       }
     }
 }
int main (){
   char a[8][8];
   for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
        cin>>a[i][j];
    }
   }
   solve(a,0);
   cout<<c<<endl;
    return 0;
}