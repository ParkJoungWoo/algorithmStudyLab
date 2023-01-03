#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>
#define X first
#define Y second
using namespace std;
int N;
int board[25][25];
int visited[25][25];
queue<pair<int,int>>q;
vector<int>ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	cin >> N;
	for(int i=0;i<N;i++){
		string s;
		cin >> s;
		for(int j=0;j<N;j++)
			board[i][j]=s[j]-'0';
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(board[i][j]==0 || visited[i][j])
				continue;
			q.push({i,j});
			visited[i][j]=1;
			int size=0;
			while(!q.empty()){
				int x = q.front().X;
				int y = q.front().Y;
				q.pop();
				size++;
				for(int k=0;k<4;k++){
					if(x+dx[k]<0||y+dy[k]<0||x+dx[k]>=N||y+dy[k]>=N)
						continue;
					if(visited[x+dx[k]][y+dy[k]] || board[x+dx[k]][y+dy[k]]==0)
						continue;
					q.push({x+dx[k],y+dy[k]});
					visited[x+dx[k]][y+dy[k]]=1;
				}
			}
			ans.push_back(size);
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for(auto a = ans.begin(); a != ans.end(); a++)
		cout << *a << '\n';
}
