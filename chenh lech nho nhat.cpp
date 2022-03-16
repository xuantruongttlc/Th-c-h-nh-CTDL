#include<bits/stdc++.h>
using namespace std;
int n,k,i,j,a[8][8], c[10], M=1e8;
bool b[10];
void ktra()
{
	int mn=1e8, mx=-1e8;
	for(i=0;i<n; i++)
	{
		int s=0;
		for(j=1; j<= k; j++)
		{
			s=s*10+a[i][c[j]-1];
		}	
		if(s<mn) mn=s;
		if(s>mx) mx = s;
	}
	if(M>mx-mn) M=mx-mn;
}
void solve(int i)
{
	int j;
	for(j=1; j<=k; j++)
	{
		if(b[j]==false)
		{
			c[i]=j;b[j]=true;
			if(i==k) ktra();
			else solve(i+1);
			b[j]=false;
		}
	}
}
void xuly()
{
	for(i=1; i<=k; i++) b[i]=false;
	solve(1);
}
main()
{
	cin >> n >> k;
	string s;
	for(i=0; i<n; i++)
	{
		cin.ignore();
		cin >> s;
		for(j=0; j<k; j++) a[i][j]=s[j]-'0';
	}
	xuly();
	cout << M;
}