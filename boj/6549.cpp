#include <iostream>
#include <bits/stdc++.h>
#include <stack>

long long max_num = 0;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m = 0;
	cin >> m;
	while(m){
		stack<long long>s;
		while(m--){
			long long k;
			cin >> k;
			if(s.empty()){
				s.push(k);
			} else if(s.top()<=k){
				s.push(k);
			} else {
				long long cnt = 1;
				while(!s.empty()){
					long long cal = s.top() * cnt++;
					s.pop();
					if(max_num < cal)
						max_num = cal;
				}
				s.push(k);
			}
		}
		long long cnt = 1;
		while(!s.empty()){
			long long cal = s.top() * cnt++;
			s.pop();
			if(max_num < cal)
				max_num = cal;
		}
		cout << max_num << '\n';
		max_num = 0;
		cin >> m;
	}
	return 0;
}
