#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
vector< vector<int>> v;
void luu()
{
	vector<int> b;
	for(int i=1; i<= k; i++)
		b.push_back(a[i]);
	v.push_back(b);
}
void Try(int i)
{
	for(int j=a[i-1]+1; j<= n-k+i; ++j)
	{
		a[i]=j;
		if(i==k) luu();
		else Try(i+1);
	}
	
}
void in(){
	for(int i=v.size()-1; i >= 0; i--){
		for(int j=0; j< v[i].size(); j++)
			cout << v[i][j] <<' ';
		cout << endl;
	}
}

main()
{
	
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		v.clear();
		Try(1);
		in();
		cout << endl;
	}
}