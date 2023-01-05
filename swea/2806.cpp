#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define SIZE 10
char chess[SIZE][SIZE];
char visited[SIZE][SIZE];
using namespace std;
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,N;
	cin >> T;
	for(int i=1;i<=T;i++){
		cin >> N;
		for(int i=0;i<N;i++){
			fill(chess[i], chess[i]+SIZE, 0);
			fill(visited[i], visited[i]+SIZE, 0);
		}	
		
	}
	return 0;
}
