#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <utility>
#include <vector>
#define X first
#define Y second
using namespace std;
int M,N,K;
int ans;
int paper[100][100];
int visited[100][100];
queue<pair<int,int>>q;
vector<int>v;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> M >> N >> K;
	int dx[4] = {0,1,0,-1};
	int dy[4] = {1,0,-1,0};
	while(K--){
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		y1 = M-y1;
		y2 = M-y2;
		for(int i=y2;i<=y1;i++)
			for(int j=x1;j<=x2;j++){
				paper[i][j]=1;
			}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(paper[i][j])
				continue;
			if(visited[i][j])
				continue;
			q.push({j,i});
			visited[i][j]=1;
			int size=1;
			while(!q.empty()){
				int x = q.front().X;
				int y = q.front().Y;
				q.pop();
				size++;
				for(int i=0;i<4;i++){
					if(x+dx[i]<0||y+dy[i]<0||x+dx[i]>=N||y+dy[i]>=M)
						continue;
					if(visited[y+dy[i]][x+dx[i]] || paper[y+dy[i]][x+dx[i]])
						continue;
					visited[y+dy[i]][x+dx[i]]=1;
					q.push({x+dx[i],y+dy[i]});
				}
			}
			ans++;
			v.push_back(size);
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++)
			cout << paper[i][j];
		cout << '\n';
	}
		
	cout << ans << '\n';
	for(auto a=v.begin(); a!=v.end(); a++)
		cout << *a << " ";
}
