#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	int v[1000];
	for(int i=1;i<=10;i++){
		int ans = 0;
		int offset = 0;
		cin >> N;
		for(int k=0;k<N;k++){
			int n;
			cin >> n;
			v[k] = n;
		}
		for(int j=2;j+2<N;j++){
			offset = v[j] - max(max(v[j-2],v[j-1]),max(v[j+1],v[j+2]));
			if(offset > 0)
				ans += offset;
		}
		cout << '#' << i << ' ' << ans << '\n';
	}
	return 0;
}
