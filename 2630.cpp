#include <bits/stdc++.h>
#include <iostream>
#define SIZE 219
using namespace std;
int N;
int paper[SIZE][SIZE];
int result[2];
bool same(int x, int y, int n){
	int point = paper[x][y];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(paper[x+i][y+j] != point){
				return false;
			}	
		}
	}
	return true;
}
void cut(int x, int y, int n){
	if(same(x,y,n)){
		result[paper[x][y]]++;
	} else{
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++){
				cut(x+n/2*i, y+n/2*j,n/2);
			}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++){
			int tmp;
			cin >> tmp;
			paper[i][j] = tmp;
		}
	cut(0,0,N);
	for(int i=0;i<2;i++)
		cout << result[i] << '\n';
	return 0;
}
