#include<bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7, n;
ll k,a[10][10], b[10][10];
void tinh(ll x[10][10], ll y[10][10]){
	int i,j,t;
	ll dl[10][10];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			ll s=0;
			for(t=0; t<n; t++)
				s=(s+(x[i][t]*y[t][j])%M)%M;
			dl[i][j]=s;
		}
	}
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			a[i][j]=dl[i][j];
}
void Doi(ll a[10][10], int n)
{
	if(n<=1) return;
	Doi(a,n/2);
	tinh(a,a);
	if(n%2==1) tinh(a,b);
	
}
void solve()
{
	Doi(a,k);
	ll s=0;
	for(int i=0; i<n; i++)
		s=(s+a[i][n-i-1])%M;
	cout << s << endl;
}
main()
{
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			{
			cin >> a[i][j];
			b[i][j]=a[i][j];
			}
		solve();
		cout << endl;
	}
}