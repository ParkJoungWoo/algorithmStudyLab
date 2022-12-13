#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <utility>
#define X first.first
#define Y first.second
#define Z second
using namespace std;
int M,N,H,ans;
int tomato[100][100][100];
int visited[100][100][100];
queue<pair<pair<int,int>,int>> q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[6] = {1,0,-1,0,0,0};
	int dy[6] = {0,-1,0,1,0,0};
	int dz[6] = {0,0,0,0,1,-1};
	cin >> M >> N >> H;
	for(int i=0;i<H;i++){
		for(int j=0;j<N;j++){
			for(int k=0;k<M;k++){
				int tmp;
				cin >> tmp;
				tomato[i][j][k] = tmp;
				if(tomato[i][j][k]==1)
					q.push({{k,j},i});
			}
		}
	}

	while(!q.empty()){
		int x = q.front().X;
		int y = q.front().Y;
		int z = q.front().Z;
		q.pop();
		if(tomato[z][y][x] > ans)
			ans = tomato[z][y][x];
		for(int p=0;p<6;p++){
			if(z+dz[p]<0 || y+dy[p]<0 || x+dx[p]<0)
				continue;
			if(z+dz[p]>=H || y+dy[p]>=N || x+dx[p]>=M)
				continue;
			if(tomato[z+dz[p]][y+dy[p]][x+dx[p]]!=0||visited[z+dz[p]][y+dy[p]][x+dx[p]])
				continue;
			visited[z+dz[p]][y+dy[p]][x+dx[p]]=1;
			tomato[z+dz[p]][y+dy[p]][x+dx[p]] += tomato[z][y][x]+1;
			q.push({{x+dx[p],y+dy[p]},z+dz[p]});
		}
	}
	
	for(int i=0;i<H;i++)
		for(int j=0;j<N;j++)
			for(int k=0;k<M;k++){
				if(tomato[i][j][k]==0){
					cout << -1;
					return 0;
				}
			}
	cout << ans-1;
}
