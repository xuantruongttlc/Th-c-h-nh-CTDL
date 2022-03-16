#include<bits/stdc++.h>
using namespace std;
int n, a[30]={}, b[1000];
vector<string> v;
void in(){
	for(int i=0; i<v.size(); i++)
		cout << v[i] << endl;
}
void save(int k){
	int i;
	for(i=1; i<k; i++) if(b[a[i]] > b[a[i+1]]) return ;
	string s;
	for(i=1; i<= k; i++)
		s+=to_string(b[a[i]])+" ";
	v.push_back(s);
}
void solve(int i, int k){
	for(int t=a[i-1]+1; t <= n-k+i; t++)
	{
		a[i]=t;
		if(i==k) save(k); 	 	
		else solve(i+1,k);
	}
}
main()
{
	int i, j;
	cin >> n;
	for(i=1; i <= n; i++) cin >> b[i];
	v.clear();
	for(i=2; i<= n; i++)
	{
		for(j=1; j<= i; j++) a[j]=j;
		solve(1,i);
	}
	sort(v.begin(), v.end());
	in();
}