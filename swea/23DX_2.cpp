#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <stack>
using namespace std;
void show(string s, int mini, int maxi){
	int tmp = 0;
	int flag = 0;
	stack<char>st;
	if(s.length() < 2)
		flag=1;
	else
		for(int i=s.length()-1;i>0;i--){
			tmp = s[i]-'0';
			if(tmp >= maxi){
				st.push(maxi+'0');
			} else if(tmp >= mini){
				if(s[i-1]-'0'-1 >= maxi){
					st.push(mini+'0');
				} else if(s[i-1]-'0'-1 >= mini){
					s[i-1]--;
					st.push(maxi+'0');
				} 
			} else if(i!=0) {
				flag=1;
				break;
			}
			cout << i << " " << s[i] << " " << tmp << " " << st.top() << '\n';
		}
	if(flag)
		cout << "-1";
	else{
		if(s[i] >= maxi)
			st.push(maxi+'0');
		else if(tmp >= mini)
			st.push(mini+'0');
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
	}
	cout << '\n';
}
int main(int argc, char** argv){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,x,y;
	string N;
	cin >> T;
	for(int i=1;i<=T;i++){
		cin >> N >> x >> y;
		cout << '#' << i << ' ';
		show(N,x,y);
	}
	return 0;
}
