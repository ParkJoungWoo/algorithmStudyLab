#include <iostream>
#include <bits/stdc++.h>
#define ll long long
ll A,B,C;
using namespace std;
long long cal(ll a, ll b, ll c){
	if(b == 0)
		return 1;
	else if(b%2)
		return a * cal(a, b-1, c) % c;
	return cal(a, b/2, c) * cal(a, b/2,c) % c;	
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> A >> B >> C;
	cout << cal(A,B,C);
	return 0;
}
