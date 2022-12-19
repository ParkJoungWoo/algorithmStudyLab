#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int N,M;
int board[1000][1000];
int visited[1000][1000];
struct m{
	int X;
	int Y;
	bool hasBreak;
};
queue<m>q;
stack<int>s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};
