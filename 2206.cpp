#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <algorithm>
#define INF 1000000000
using namespace std;
int N,M;
int board[1000][1000];
int visited[1000][1000];
struct m{
	int X;
	int Y;
	bool hasBreak;
};
stack<m>s;
long ans = INF;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[4] = {1,-1,0,0};
	
	int dy[4] = {0,0,1,-1};
	cin >> N >> M;
	for(int i=0;i<N;i++){
		string s;
		cin >> s;
		for(int j=0;j<M;j++)
			board[i][j]=s[j]-'0';
	}
	s.push({0,0,0});
	visited[0][0]=1;
	while(!s.empty()){
		int x = s.top().X;
		int y = s.top().Y;
		bool bk = s.top().hasBreak;
		s.pop();
		if(x==N-1 && y==M-1){
			if(visited[x][y] < ans)
				ans = visited[x][y];
		}
		for(int i=0;i<4;i++){
			if(x+dx[i]<0||y+dy[i]<0||x+dx[i]>=N||y+dy[i]>=M)
				continue;
			if(visited[x][y]+1 >= visited[x+dx[i]][y+dy[i]] && visited[x+dx[i]][y+dy[i]])
				continue;
			if(bk){
				if(board[x+dx[i]][y+dy[i]]==0){
					s.push({x+dx[i],y+dy[i],bk});
					visited[x+dx[i]][y+dy[i]]=visited[x][y]+1;
				}
			} else{
				if(board[x+dx[i]][y+dy[i]]){
					s.push({x+dx[i],y+dy[i],1});
					visited[x+dx[i]][y+dy[i]]=visited[x][y]+1;
				} else{
					s.push({x+dx[i],y+dy[i],bk});
					visited[x+dx[i]][y+dy[i]]=visited[x][y]+1;
				}
			}
		}
//		cout << x << " " << y << " " << bk << '\n';
//		for(int i=0;i<N;i++){
//			for(int j=0;j<M;j++)
//				cout << visited[i][j];
//			cout << '\n';
//		}
//		cout << '\n';
	}
	ans = (ans==INF) ? -1 : ans;
	cout << ans;
}
