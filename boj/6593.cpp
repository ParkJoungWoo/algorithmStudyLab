#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int L,R,C;
int board[30][30][30];
int visited[30][30][30];
struct m{
	int X;
	int Y;
	int Z;
};
queue<m>q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[6] = {1,-1,0,0,0,0};
	int dy[6] = {0,0,1,-1,0,0};
	int dz[6] = {0,0,0,0,1,-1};
	
	while(1){
		cin >> L >> R >> C;
		int rx,ry,rz;
		if(L==0 && L==R && R == C)
			break;
		for(int i=0;i<L;i++)
			for(int j=0;j<R;j++){
				string input;
				cin >> input;
				for(int k=0;k<C;k++){
					if(input[k]=='S'){
						q.push({i,j,k});
						visited[i][j][k]=1;
					} else if(input[k]=='#')
						board[i][j][k]=0;
					else if(input[k]=='E'){
						board[i][j][k]=1;
						rx = i;
						ry = j;
						rz = k;
					} else
						board[i][j][k]=1;
				}
			}
		while(!q.empty()){
			int x = q.front().X;
			int y = q.front().Y;
			int z = q.front().Z;
			if(x==rx && y==ry && z ==rz){
				cout << "Escaped in "<< visited[x][y][z]-1 << " minute(s)." << '\n';
				break;
			}
			q.pop();
			for(int i=0;i<6;i++){
				if(x+dx[i]<0||y+dy[i]<0||z+dz[i]<0||x+dx[i]>=L||y+dy[i]>=R||z+dz[i]>=C)
					continue;
				if(visited[x+dx[i]][y+dy[i]][z+dz[i]] || board[x+dx[i]][y+dy[i]][z+dz[i]]!=1)
					continue;
				visited[x+dx[i]][y+dy[i]][z+dz[i]]=visited[x][y][z]+1;
				q.push({x+dx[i],y+dy[i],z+dz[i]});
			}
		}
		if(q.empty())
			cout << "Trapped!" << '\n';
		q = queue<m>();
		for(int i=0;i<L;i++)
			for(int j=0;j<R;j++)
				fill(visited[i][j], visited[i][j]+C,0);
	}
}
