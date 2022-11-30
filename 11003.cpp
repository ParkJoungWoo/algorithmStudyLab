#include<bits/stdc++.h>
#include<iostream>
#include<deque>
#include<utility>

#define V first
#define Q second
using namespace std;
int N, L;
deque<pair<int,int>>dq;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> L;
	for(int i = 0; i < N; i++){
		int temp;
		cin >> temp;
		if(dq.empty()){
			dq.push_back(make_pair(temp, i));
		} else if(dq.front().V >= temp){
			dq.push_front(make_pair(temp, i));
		} else if(dq.back().V <= temp){
			dq.push_back(make_pair(temp, i));
		} else {
			while(dq.back().V>temp&&!dq.empty())
				dq.pop_back();
			dq.push_back(make_pair(temp, i));
		}
		while((i-L>=0) && !dq.empty()&&(i-dq.front().Q >= L))
			dq.pop_front();	
		cout << dq.front().V << " ";
	}
	return 0;
}
/*
1-L ~ 0
2-L ~ 1
3-L ~ 2
.
.
.
N+1-L ~ N

L ~ N
2-3+1 ~ 2
3-3+1 ~ 3
.
.
.
11-3+1 ~ 11
*/
