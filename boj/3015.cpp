#include <iostream>
#include <bits/stdc++.h>
#include <utility>
#include <stack>

#define V first
#define Q second
using namespace std;

int N;
long long ans = 0;
stack<pair<int,int>>s;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	while(N--){
		long m;
		cin >> m;
		if(s.empty()){
			s.push(make_pair(m, 1));
		} else if(s.top().V > m){
			s.push(make_pair(m, 1));
			ans++;
		} else if(s.top().V == m){
			ans += s.top().Q++;
			if(s.size() > 1)
				ans++;
		} else {
			while(!s.empty()&&s.top().V<m){
				ans += s.top().Q;
				s.pop();
			}
			if(s.empty()){
				s.push(make_pair(m, 1));
			} else if(s.top().V > m){
				s.push(make_pair(m, 1));
				ans++;
			} else if(s.top().V == m){
				ans += s.top().Q++;
				if(s.size() > 1)
					ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
