#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <vector>
#include <utility>
using namespace std;

#define X first
#define Y second

int N;
stack<pair<int,int>>s;
vector<int>answer;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int i = 0; i < N; i++){
		int right;
		cin >> right;
		answer.push_back(-1);
		if(s.empty()){
			s.push(make_pair(i, right));
			continue;
		} else if(s.top().Y < right){
			while(!s.empty() && s.top().Y < right){
				answer[s.top().X] = right;
				s.pop();
			}
		} 
		s.push(make_pair(i, right));
	}
	for(auto i : answer)
		cout << i << " ";
	return 0;
}

