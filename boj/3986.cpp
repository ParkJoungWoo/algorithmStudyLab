#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
int N, ans;
string str;
stack<char>s;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	while(N--){
		cin >> str;
		for(int i=0; i<str.length(); i++){
			if(!s.empty()&&s.top()==str[i])
				s.pop();
			else
				s.push(str[i]);
		}
		if(s.empty())
			ans++;
		else
			s = stack<char>();
	}
	cout << ans;
}
