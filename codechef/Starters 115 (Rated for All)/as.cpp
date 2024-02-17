#include <bits/stdc++.h>
using namespace std;
int  arr[200009];
int a[200009];
int main() {
    int t,i,n;
	scanf("%d",&t);

	while (t--) {
		scanf("%d",&n);
		for (i = 0; i < n; i++) {
			scanf("%d",&arr[i]);
		}
		int operators=n;
        int cnt=0;
		a[0]=arr[0];
		for(i=1;i<n;i++)
            a[i]=min(a[i-1],arr[i]);
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]==a[i])
            {
                cnt++;
                operators=min(operators,n-cnt+arr[i]);
            }
        }
		printf("%d\n",operators);
	}
}
