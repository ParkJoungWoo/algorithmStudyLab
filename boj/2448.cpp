#include <bits/stdc++.h>
#include <iostream>
#define SIZE 3072
using namespace std;
int N;
char board[SIZE][SIZE];
void star(int x, int y, int n){
	if(n==1){
		board[x][y]='*';
	}else {
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				if(i!=1 || j!=1)
					star(x+n/3*i,y+n/3*j,n/3);	
	} 
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int i=0;i<N;i++)
		fill(board[i], board[i]+N, ' ');
	star(0,0,N);
	for(int i=0;i<N;i++)
		cout << board[i] << '\n';
	return 0;
}
/*
  *
 * *
*****
*/
