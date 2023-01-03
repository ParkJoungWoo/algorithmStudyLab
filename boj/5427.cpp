#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <deque>
#include <utility>
#define X first
#define Y second
#define EMPTY '.'
#define FIRE '*'
#define MAN '@'
#define FAIL "IMPOSSIBLE"
using namespace std;
int T,W,H;
int userX, userY;
int wall[1000][1000];
int visited[1000][1000];
queue<pair<int,int>>q;
//deque<pair<int,int>>q;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string input;
	int dx[4] = {0,1,0,-1};
	int dy[4] = {1,0,-1,0};
	cin >> T;
	while(T--){
		cin >> W >> H;
		for(int i =0;i<H;i++){
			cin >> input;
			for(int j=0;j<W;j++){
				wall[i][j] = input[j];
				if(input[j]==MAN){
					userX = i;
					userY = j;
					visited[i][j]=1;
				} else if(input[j]==EMPTY){
					continue;
				} else{
					if(input[j]==FIRE)
						q.push({i,j});
					visited[i][j]=-1;
				}
			}
		}
		q.push({userX, userY});
		while(!q.empty()){
			int x = q.front().X;
			int y = q.front().Y;
			if(visited[x][y]>0&&(x==0 || x==H-1 || y==0 || y==W-1)){
				if((H==1 && W==1) || (H!=1 && W!=1)){
					cout << visited[x][y] << '\n';
					break;	
				} else if(W==1&&(x==0 || x==H-1)){
					cout << visited[x][y] << '\n';
					break;
				} else if(H==1&&(y==0 || y==W-1)){
					cout << visited[x][y] << '\n';
					break;
				}			
			}
			q.pop();
			for(int i=0;i<4;i++){
				if(dx[i]+x<0||dy[i]+y<0||dx[i]+x>=H||dy[i]+y>=W)
					continue;
				if(visited[dx[i]+x][dy[i]+y])
					continue;
				if(visited[x][y] > 0)
					visited[dx[i]+x][dy[i]+y] = visited[x][y]+1;
				else
					visited[dx[i]+x][dy[i]+y] = -1;
				q.push({dx[i]+x,dy[i]+y});	
			}	
		}
		if(q.empty())
			cout << FAIL << '\n';
		q = queue<pair<int,int>>();
		for(int i=0;i<H;i++)
			fill(visited[i],visited[i]+W,0);
	}
}
