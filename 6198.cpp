#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;
int main(void){
	ios::sync_with_stdio(0);
  	cin.tie(0);
	long N, m, sum = 0;
	vector<long>list;
	stack<long>max_stack;
	cin >> N;
	while(N--){
		cin >> m;
		list.push_back(m);
	}
	for(int i = 0; i < list.size(); i++){
		if(max_stack.empty()){
			max_stack.push(list[i]);
		} else if(max_stack.top() > list[i]){
			sum+=max_stack.size();
			max_stack.push(list[i]);
		} else if(max_stack.top() < list[i]){
			max_stack.pop();
			i--;
		}
		cout << i << " yoyo " << max_stack.size() << '\n';
	}
	cout << sum;
	return 0;
}
