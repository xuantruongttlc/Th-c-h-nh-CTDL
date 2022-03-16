#include<bits/stdc++.h>
using namespace std;
#define x abs
int a,b,c,d;
void tinh(){
	if(a == c)  cout << x(b-d);
	else if(b==d) cout << x(a-c);
	else if(x(a-c) == x(b-d))
	{
		int sum=pow(a-c,2)+pow(b-d,2);
		float y=sqrt(sum);
		cout << y/sqrt(2);
	}
	else if(x(a-c) < x(b-d)) cout << x(b-d);
	else if(x(a-c) > x(b-d)) cout << x(a-c);
}
main()
{
	cin >> a >> b >> c >> d;
	tinh();
}