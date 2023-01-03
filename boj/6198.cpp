#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;

int N;
stack<long long> garden;

int main(void){
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	long long answer = 0;
  	cin >> N;
	while(N--){
		long long temp;
		cin >> temp;
		if(garden.empty()){
			garden.push(temp);
			continue;
		} else if(garden.top() <= temp){
			while(!garden.empty()){
				if(garden.top() <= temp)
					garden.pop();
				else
					break;
			}
			answer+=garden.size();
			garden.push(temp);
		} else if(garden.top() > temp){
			answer+=garden.size();
			garden.push(temp);
		}			
	}
	cout << answer;
	return 0;
}
