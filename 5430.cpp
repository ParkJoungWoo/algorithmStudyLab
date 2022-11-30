#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <deque>
using namespace std;
int T;
int N;
deque<int>dq;
string p;
string arr;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> T;
	while(T--){
		int way = 1;
		cin >> p;
		cin >> N;
		cin >> arr;
		arr = arr.substr(1,arr.length()-1);
		replace(arr.begin(), arr.end(), ',', ' ');
		stringstream ss(arr);
		int temp;
		while(ss >> temp){
			dq.push_back(temp);
		}
		for(int i = 0; i < p.length(); i++){
			if(p[i] == 'R')	
				way *= -1;
			else if(p[i] == 'D'){
				if(dq.empty()){
					cout << "error"	<<'\n';
					break;
				}			
				if(way > 0)	
					dq.pop_front();
				else
					dq.pop_back();
			}
			if(i == p.length()-1){
				cout << '[';
				while(!dq.empty()){
					if(way > 0){
						cout << dq.front();
						dq.pop_front();
					}
					else {
						cout << dq.back();
						dq.pop_back();
					}
					if(!dq.empty())
						cout << ',';
				}
				cout << "]\n";
			}			
		}
	}
	return 0;
}
