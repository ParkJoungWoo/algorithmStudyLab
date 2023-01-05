#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,T;
	cin >> T;
	for(int i=1;i<=T;i++){
		string s;
		cin >> s >> N;
		for(int k=0;k<s.length();k++){
			int isMax=k;
			for(int j=k;j<s.length();j++){
				if(s[j] < s[isMax])
					continue;
				else if(s[j] == s[isMax]) 
					isMax = j;
				else if(s[j] > s[isMax]) 
					isMax = j;
			}
			if(s[isMax] > s[k]){
				char tmp = s[k];
				s[k] = s[isMax];
				s[isMax] = tmp;
				N--;
			} 
			if(N<1)
				break;
		}
		cout << '#' << i << ' ' << s << '\n';
	}
	return 0;
}
