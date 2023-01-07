#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define SIZE 100
int num[SIZE][SIZE];
using namespace std;
int maxRowCol(){
	int maximum=0;
	for(int i=0;i<SIZE;i++){
		int temp1=0;
		int temp2=0;
		for(int j=0;j<SIZE;j++){
			temp1 += num[i][j];
			temp2 += num[j][i];
		}
		maximum = max(temp1, maximum);
		maximum = max(temp2, maximum);
	}
	return maximum;
}
int maxCross(){
	int down=0;
	int up=0;
	for(int i=0;i<SIZE;i++)
		down += num[i][i];
	for(int i=0;i<SIZE;i++)
		up += num[SIZE-1-i][i];			
	return max(up, down);

}
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,N;
	T = 10;
//	cin >> T;
	for(int i=1;i<=T;i++){
		cin >> N;
		for(int i=0;i<SIZE;i++)
			for(int j=0;j<SIZE;j++){
				cin >> num[i][j];
			}
		cout << '#' << i << ' ' << max(maxRowCol(), maxCross()) << '\n';
	}
	return 0;
}
