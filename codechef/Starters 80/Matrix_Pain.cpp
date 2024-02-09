#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void build_tree(vector<ll>&a,ll s,ll e,vector<ll>&tree,ll index )
{
    if(s==e)
    {
        tree[index]=a[s];
        return;
    }
    ll mid=(s+e)/2;
    build_tree(a,s,mid,tree,2*index);
    build_tree(a,mid+1,e,tree,2*index+1);
    tree[index]=tree[2*index]+tree[2*index+1];
    return;
}
//update range queries
void update_range(vector<ll>&tree,ll ss,ll se,ll qs,ll qe,ll update,ll index)
{   
    // when i is out of bound
    if(ss>qe || se<qs)
    {
        return;
    }
    // leaf node
     if(ss==se)
    {
        tree[index]*=update;
        return;
    }
    int mid=(ss+se)/2;
    update_range(tree,ss,mid,qs,qe,update,2*index);
    update_range(tree,mid+1,se,qs,qe,update,2*index+1);
    tree[index]=tree[2*index]+tree[2*index+1];
    return;
    
}
ll queries(vector<ll>&tree,ll ss,ll se,ll qs,ll qe,ll index)
{   
    //lying outside or no overlapping queries
    if(qe<ss || qs>se)
    {
        return 0;
    }
   // lying inside or total overlapping queries
   if(ss>=qs && se<=qe)
   {
     return tree[index];
   }
   //partial overlapping queries
    ll mid=(ss+se)/2;
    ll l= queries(tree,ss,mid,qs,qe,2*index);
    ll r=queries(tree,mid+1,se,qs,qe,2*index+1);
    return l+r;

}
int main ()
{
    ll  t;
    cin>>t;
    while(t--)
    { 
      ll n,m,k;
      cin>>n>>m>>k;
      ll size=n*m;
      vector<ll>matrix(size);
      ll k1=0;
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<m;j++)
         {
            matrix[k1++]=i*2+j+1;
           // cout<<i*2+j+1<<" ";
         }
         cout<<endl;
      }
       vector<ll>tree(4*n+1);
       build_tree(matrix,0,size-1,tree,1);
       for(int i=1;i<tree.size();i++)
      {
         cout<<tree[i]<<" ";
      }
      cout<<endl;
      while(k--)
      {
        ll q,x,v;
        cin>>q>>x>>v;
        if(q==0)
        {
           update_range(tree,0,n-1,3,5,v,1);
        }
        else
        {
           update_range(tree,0,n-1,3,5,v,1);
        }
         
      }
     cout<<queries(tree,0,n-1,0,n-1,1)<<endl;


        
    }
    return 0;
}