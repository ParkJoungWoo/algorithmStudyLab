#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <queue>
using namespace std;
int F,S,G,U,D;
int visited[1000001];
queue<int>q;
vector<int>ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> F >> S >> G >> U >> D;
	q.push(S);
	visited[S]=1;
	while(!q.empty()){
		int x = q.front();
		if(x==G){
			cout << visited[x]-1;
			break;
		}
		q.pop();
		if(x+U>=1 && x+U <=F)
			if(!visited[x+U]){
				q.push(x+U);
				visited[x+U] = visited[x]+1;
			}
		if(x-D>=1 && x-D<=F)
			if(!visited[x-D]){
				q.push(x-D);
				visited[x-D] = visited[x]+1;
			}
	}
	if(q.empty())
		cout << "use the stairs"; 
}
