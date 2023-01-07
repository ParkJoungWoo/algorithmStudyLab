#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
#define SIZE 20
using namespace std;
struct s{
	int X;
	int Y;
	string status;
};
char souv[SIZE][SIZE];
queue<s>q;
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[4] = {0,0,1,-1};
	int dy[4] = {1,-1,0,0};
	int T,R,C;
	cin >> T;
	for(int i=1;i<=T;i++){
		cin >> R >> C;
		for(int i=0;i<R;i++)
			cin >> souv[i];
		q.push({0,0,"00000000000000000000000000"});
		while(!q.empty()){
			int x = q.front().X;
			int y = q.front().Y;
			string status = q.front().status;
			status[souv[x][y]-'A']='1';
			q.pop();
			for(int i=0;i<4;i++){
				if(x+dx[i] < 0 || x+dx[i] >= R || y+dy[i] < 0 || y+dy[i] >= C)
					continue;
				if(status[souv[x+dx[i]][y+dy[i]]-'A']=='1')
					continue;
				string temp = status;
				temp[souv[x+dx[i]][y+dy[i]]-'A']='1';
				q.push({x+dx[i], y+dy[i],temp});
			}
			if(q.empty()){
				int as = 0;
				for(int j=0;j<status.length();j++)
					if(status[j]=='1')
						as++;
				cout << '#' << i << ' ' << as << '\n';
			}
		}
	}
	return 0;
}
