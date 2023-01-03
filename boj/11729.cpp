#include <iostream>
#include <bits/stdc++.h>
#include <stack>
int N, ans=1;
using namespace std;
void hanoi(int from, int to, int size){
	if(size==1){
		cout << from << " " << to << '\n';
		return;
	}
	hanoi(from, 6-to-from, size-1);
	hanoi(from, to, 1);
	hanoi(6-to-from, to, size-1);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int j=0;j<N;j++)
		ans *= 2;
	cout << ans - 1 << '\n';
	hanoi(1,3,N);
	return 0;
}
