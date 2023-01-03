#include <bits/stdc++.h>
#include <iostream>
#define SIZE 2187
using namespace std;
int N;
int paper[SIZE][SIZE];
int result[3];
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
		result[1+paper[x][y]]++;
	} else{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++){
				cut(x+n/3*i, y+n/3*j,n/3);
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
	for(int i=0;i<3;i++)
		cout << result[i] << '\n';
	return 0;
}
