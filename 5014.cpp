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
