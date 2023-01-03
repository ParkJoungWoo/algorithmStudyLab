#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int R,C,N,result;
int zet(int row, int col, int size){
	if(size!=2){
		if(row < size/2 && col < size/2)
			return zet(row, col, size/2);
		else if(row < size/2 && col < size)
			return zet(row, col-size/2, size/2) + (int)pow(size/2,2);
		else if(row < size && col < size/2)
			return zet(row-size/2, col, size/2) + (int)pow(size/2,2)*2;
		else
			return zet(row-size/2, col-size/2, size/2) + (int)pow(size/2,2)*3;
	} 
	if(row==0 && col ==0)
		return 0;
	else if(row==0 && col ==1)
		return 1;
	else if(row==1 && col ==0)
		return 2;
	else
		return 3;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> R >> C;
	cout << zet(R,C,(int)pow(2,N));
	return 0;
}
