#include<bits/stdc++.h>
using namespace std;
int n, a[15]={};
void in(){
	for(int i=1; i<= n;	++i) cout << a[i];
	cout <<' ';
}
void Try(int i)
{
	for(int j=1; j<= n; ++j)
	{
			a[i] = j;
			if(i==n)
			{
				if(check()) in();
			}
			else Try(i+1);
	}
}
main()
{
	int t=1; cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
		cout << endl;
	}
}
