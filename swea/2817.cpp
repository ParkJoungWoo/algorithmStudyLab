#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define SIZE 1000
using namespace std;
int arr[SIZE];
int visited[SIZE];
int total_visit;
int fullSum;
int result;
void find(int size, int count, int sum){
	for(int i=0;i<size;i++){
		if(total_visit == count){
			if(sum == fullSum)
				result++;
			cout << size << ' ' << count << ' ' << fullSum << ' ' << result << '\n';
			return;
		} else {
			if(visited[i])
				continue;
			else{
				total_visit++;
				visited[i]++;
				fullSum += arr[i];
				find(size,count,sum);
				total_visit--;
				visited[i]--;
				fullSum -= arr[i];
			}
		}
	}
}
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,N,K;
	cin >> T;
	for(int i=1;i<=T;i++){
		cin >> N >> K;
		total_visit=0;
		fullSum=0;
		result=0;
		fill(visited,visited+N,0);
		for(int i=0;i<N;i++)
			cin >> arr[i];
		for(int i=0;i<=N;i++)
			find(N,i,K);
		cout << '#' << i << ' ' << result << '\n';
	}
	return 0;
}
