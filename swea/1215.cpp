#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define SIZE 8
char word[SIZE][SIZE];
int find(int n){
	int _sum=0;
	for(int i=0;i<SIZE;i++){
		for(int j=0;j+n-1<SIZE;j++){
			int adder1 = 1;
			int adder2 = 1;
			for(int k=0;k<n;k++){
				if(word[i][j+k] != word[i][j+n-1-k]){
					adder1 = 0;
					break;
				}
			}
			for(int k=0;k<n;k++){
				if(word[j+k][i] != word[j+n-1-k][i]){
					adder2 = 0;
					break;
				}
			}
			_sum += adder1+adder2;
		}
	}
	return _sum;
}
using namespace std;
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,N;
//	cin >> T;
	T = 10;
	for(int i=1;i<=T;i++){
		cin >> N;
		for(int i=0;i<8;i++)
			cin >> word[i];
		cout << '#' << i << ' ' << find(N) << '\n';
	}
	return 0;
}
