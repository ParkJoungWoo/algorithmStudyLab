#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <deque>
#include <utility>
#define X first
#define Y second
#define EMPTY '.'
#define WALL '#'
#define FIRE '*'
#define MAN '@'
#define FAIL "IMPOSSIBLE"
using namespace std;
int T,W,H;
int userX, userY;
int wall[1000][1000];
int visited[1000][1000];
//queue<pair<int,int>>q;
deque<pair<int,int>>q;
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
				if(input[j]==FIRE){
					q.push_back({j,i});
					visited[i][j]=-1;
				} else if(input[j]==MAN){
					userX = j;
					userY = i;
					visited[i][j]=1;
				} else if(input[j]==WALL){
					visited[i][j]=-1;
				}
			}
		}
		q.push_front({userX, userY});
		while(!q.empty()){
			int x = q.front().X;
			int y = q.front().Y;
			if((visited[y][x]>0)&&(x==0||x==W-1||y==0||y==H-1)){
				cout << visited[y][x] << '\n';
				break;
			}
			q.pop_front();
			for(int i=0;i<4;i++){
				if(dx[i]+x<0||dy[i]+y<0||dx[i]+x>=W||dy[i]+y>=H)
					continue;
				if(visited[dy[i]+y][dx[i]+x] != 0)
					continue;
				if(visited[y][x] > 0)
					visited[dy[i]+y][dx[i]+x] = visited[y][x]+1;
				else
					visited[dy[i]+y][dx[i]+x] = -1;
				q.push_back({dx[i]+x,dy[i]+y});	
			}	
//			for(int i=0;i<H;i++){
//				for(int j=0;j<W;j++)
//					cout << visited[i][j];
//				cout << '\n';
//			}
//			cout << '\n';
		}
		if(q.empty())
			cout << FAIL << '\n';
		q = deque<pair<int,int>>();
		for(int i=0;i<H;i++)
			fill(visited[i],visited[i]+W,0);
	}
}
