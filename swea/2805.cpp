#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
char arr[50][50];
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,T;
	cin >> T;
	for(int i=1;i<=T;i++){
		cin >> N;
		int ans = 0;
		for(int j=0;j<N;j++)
			cin >> arr[j];
		for(int j=0;j<(N+1)/2;j++){
			for(int k=0;k<=j;k++){
				int result1 = arr[j][(N-1)/2+k] + arr[j][(N-1)/2-k] - 2 * '0';
				int result2 = arr[N-1-j][(N-1)/2+k] + arr[N-1-j][(N-1)/2-k] - 2 * '0';
				if(k==0){
					result1 /= 2;
					result2 /= 2;
				}
				if(j==N-1-j){
					result1=0;
				}
				ans += result1 + result2;
			}
		}
		cout << '#' << i << ' ' << ans << '\n';
	}
	return 0;
}
