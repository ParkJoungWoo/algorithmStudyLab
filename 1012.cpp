#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <utility>

#define X first
#define Y second

using namespace std;
int T;
int M, N, K;
int vas[51][51];
int visited[51][51];
queue<pair<int,int>>q;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};
	cin >> T;
	while(T--){
		int ans = 0;
		cin >> M >> N >> K;
		while(K--){
			int a,b;
			cin >> a >> b;
			vas[a][b] = 1;
		}
		for(int i = 0; i < M; i++){
			for(int j = 0; j < N; j++){
				if(vas[i][j] == 0)
					continue;
				if(visited[i][j])
					continue;
				q.push(make_pair(i,j));
				visited[i][j]=1;
				while(!q.empty()){
					int x = q.front().X;
					int y = q.front().Y;
					
					q.pop();
					for(int i = 0; i < 4; i++){
						if(x+dx[i]<0 || x+dx[i]>=M || y+dy[i]<0 || y+dy[i]>=N)
							continue;
						if(vas[x+dx[i]][y+dy[i]] && visited[x+dx[i]][y+dy[i]]==0)
							q.push(make_pair(x+dx[i], y+dy[i]));
						visited[x+dx[i]][y+dy[i]]=1;
					}
				}
				ans++;
			}
		}
		for(int i = 0; i < 50; i++){
			fill(vas[i], vas[i]+50, 0);
			fill(visited[i], visited[i]+50, 0);	
		}
		cout << ans << '\n';
	}
}
