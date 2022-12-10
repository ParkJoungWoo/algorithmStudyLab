#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <utility>
#define X first
#define Y second
using namespace std;
int N, ans1, ans2;
int board[100][100];
int visited[100][100];
queue<pair<int,int>> q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};
	cin >> N;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++){
			char a;
			cin >> a;
			board[i][j] = a;
		}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(visited[i][j])
				continue;
			visited[i][j] = 1;
			q.push(make_pair(i,j));
			while(!q.empty()){
				int x = q.front().X;
				int y = q.front().Y;
				q.pop();
				for(int k=0;k<4;k++){
					if(x+dx[k]<0 || x+dx[k]>=N || y+dy[k]<0 || y+dy[k]>= N)
						continue;
					if(board[x][y] != board[x+dx[k]][y+dy[k]])
						continue;
					if(visited[x+dx[k]][y+dy[k]])
						continue;
					visited[x+dx[k]][y+dy[k]] = 1;
					q.push(make_pair(x+dx[k], y+dy[k]));
				}
			}
			ans1++;
		}
	}
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			fill(visited[i], visited[i]+N, 0);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(visited[i][j])
				continue;
			visited[i][j] = 1;
			q.push(make_pair(i,j));
			while(!q.empty()){
				int x = q.front().X;
				int y = q.front().Y;
				q.pop();
				for(int k=0;k<4;k++){
					if(x+dx[k]<0 || x+dx[k]>=N || y+dy[k]<0 || y+dy[k]>= N)
						continue;
					if(board[x][y] == 'B'){
						if(board[x][y] != board[x+dx[k]][y+dy[k]])
							continue;	
					} else{
						if(board[x+dx[k]][y+dy[k]] == 'B')
							continue;
					}
					if(visited[x+dx[k]][y+dy[k]])
						continue;
					visited[x+dx[k]][y+dy[k]] = 1;
					q.push(make_pair(x+dx[k], y+dy[k]));
				}
			}
			ans2++;
		}
	}
	cout << ans1 << " "<< ans2;
}
