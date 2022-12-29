#include <bits/stdc++.h>
#include <iostream>
#define SIZE 65
using namespace std;
int N;
char board[SIZE][SIZE];
bool same(int x, int y, int n){
	char a = board[x][y];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(board[x+i][y+j] != a)
				return false;
	return true;		
}
void zip(int x, int y, int n){
	if(same(x,y,n)){
		cout << board[x][y];
	} else{
		cout << '(';
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++)
				zip(x+i*n/2,y+j*n/2,n/2);
		cout << ')';
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> board[i];
	}
	zip(0,0,N);
	return 0;
}
