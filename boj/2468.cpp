#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
#define X first
#define Y second
using namespace std;
int N, _max, _min=101, ans;
int board[100][100];
int visited[100][100];
queue<pair<int,int>>q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	cin >> N;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++){
			cin >> board[i][j];
			_max = max(board[i][j], _max);
			_min = min(board[i][j], _min);	
		}
	for(int k=min-1; k<=_max; k++){
		int size = 0;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(visited[i][j] || board[i][j] <= k)
					continue;
				visited[i][j] = 1;
				q.push({i,j});
				while(!q.empty()){
					int x = q.front().X;
					int y = q.front().Y;
					q.pop();
					for(int p=0;p<4;p++){
						if(x+dx[p]<0||x+dx[p]>=N||y+dy[p]<0||y+dy[p]>=N)
							continue;
						if(visited[x+dx[p]][y+dy[p]] || board[x+dx[p]][y+dy[p]]<=k)
							continue;
						visited[x+dx[p]][y+dy[p]]=1;
						q.push({x+dx[p],y+dy[p]});
					}
				}
				size++;			
			}
		}
		for(int i=0;i<N;i++)
			fill(visited[i],visited[i]+N,0);
		ans = max(ans, size);
	}
	cout << ans;
}
