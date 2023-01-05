#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define SIZE 100
using namespace std;
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,T=10;
	for(int i=1;i<=T;i++){
		cin >> N;
		int arr[SIZE];
		for(int j=0;j<SIZE;j++)
			cin >> arr[j];
		while(N--){
			(*max_element(arr, arr+SIZE))--;
			(*min_element(arr, arr+SIZE))++;
		}
		
		cout << '#' << i << ' ' << (*max_element(arr, arr+SIZE))-(*min_element(arr, arr+SIZE)) << '\n';
	}
	return 0;
}
