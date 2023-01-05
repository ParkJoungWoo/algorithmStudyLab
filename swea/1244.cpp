#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,T;
	cin >> T;
//	T = 10;
	for(int i=1;i<=T;i++){
		string s;
		cin >> s >> N;
		if(N >= s.length()){
			for(int j=0;j<s.length();j++){
				int tmp1, tmp = j;
				for(int k=j+1;k<s.length();k++){
					if(s[tmp] <= s[k])
						tmp = k;
				}
				tmp1 = s[j];
				s[j] = s[tmp];
				s[tmp] = tmp1;
			}
		} else {
			sort(s.begin(), s.begin()+N);
			for(int j=0;j<s.length()&&j<N;j++){
				int tmp1, tmp = j;
				for(int k=j+1;k<s.length();k++){
					if(s[tmp] <= s[k])
						tmp = k;
				}
				tmp1 = s[j];
				s[j] = s[tmp];
				s[tmp] = tmp1;
			}
		}
		cout << '#' << i << ' ' << s << '\n';
	}
	return 0;
}
