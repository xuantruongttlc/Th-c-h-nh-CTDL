#include<bits/stdc++.h>
using namespace std;
int n,a[6],b[6], X1[10]={0}, X2[10]={0};
void Tinhchu(int i)
{
	for(int j=1; j<= n; j++)
	{
		if(X2[j]==0)
		{
			b[i]=j;
			if(i==n)
			{
				for(int j=1; j<=n; j++)
				{
					if(a[j]==1) cout << "A";
					if(a[j]==2) cout << "B";
					if(a[j]==3) cout << "C";
					if(a[j]==4) cout << "D";
					if(a[j]==5) cout << "E";
				}
				for(int t=1; t <= n; t++) cout << b[t];
				cout << endl;
			}
			else Tinhchu(i+1);
			X2[j]=0;
		}
	}
}
void Tinh(int i)
{
	for(int j=1; j<=n; j++)
	{
		if(X1[j]==0)
		{
			a[i]=j;
			X1[j]=1;
			if(i==n)
			{
				Tinhchu(1);
			}
			else Tinh(i+1);
			X1[j]=0;
		}
	}
}
main()
{
	cin >> n;
	Tinh(1);
}