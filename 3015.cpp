#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int N;
int ans = 0;
stack<int>s;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	while(N--){
		int right;
		cin >> right;
		if(s.empty()){
			s.push(right);
		} else if(s.top() >= right){
			ans++;
			s.push(right);
		} else{
			while(!s.empty()&&s.top()<right){
				ans += s.size();
				s.pop();
			}
			s.push(right);
		}
		cout << N << " "  << s.top() << " : " << ans << '\n';
	}
	cout << ans;
	return 0;
}
