#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
string str;
stack<char>s;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	getline(cin, str);
	while(str != "."){
		for(int i = 0; i < str.length(); i++){
			if(str[i] == '(' || str[i] ==')' || str[i] =='[' || str[i] ==']'){
				if(!s.empty() && ((s.top() == '(' && str[i] ==')') || (s.top()=='[' && str[i]==']')))
					s.pop();
				else
					s.push(str[i]);
			}
		}
		if(s.empty())
			cout << "yes\n";
		else{
			cout << "no\n";
			s = stack<char>();
		}
		getline(cin, str);
	}
}
