#include<bits/stdc++.h>
using namespace std;
int n, x, y, i, j;
int solve(int a[])
{
	int k=5,t,l;
	for(i=1; i<n-k+2; i++)
	{
		int d=0;
		for(j=i; j <= n; j++)
		{
			if(a[j]==x) d++;
			else break;
		}
		if(d >= k)
		{
			for(t=1; t< n-d+2; t++)
			{
				int c=0;
				for(l=t; l<=n; l++)
				{
					if(a[l] != x) c++;
					else break;
				}
				if(c >= d) return 0;
			}
			return 1;
		}
	}
	return 0;
}
void In(int a[])
{
	for(i=1; i<= n; i++)
	{
		if(a[i]==1) cout << 'X';
		else cout << 'O';
	}
	cout << endl;
}
main(){
	int t ;cin >> t;char s;
	while(t--)
	{
		cin >> n >> s;
		if(s=='X'){x=1; y=0;}
		else {x=0; y=1;}
		int a[n+1], t=0;
		for(i=1; i<=n; i++) a[i]=0;
		while(1)
		{
			if(solve(a)) In(a);
			i=n;
			while(i>0 && a[i]==1){ a[i] = 0; i--;}
			if(i==0) break;
			else a[i]=1;	
		}
	}
}