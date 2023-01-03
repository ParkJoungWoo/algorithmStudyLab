#include <iostream>
#include <bits/stdc++.h>
#include <vector>
int N;
using namespace std;
vector<string>v;
bool isFirst(string s1, string s2){
	bool result = true;
	for(int i=0;i<s1.length();i++){
		if(s1[i]==s2[i])
			continue;
		if(s1[i]<s2[i])
			break;
		else{
			result = false;
			break;
		}
	}
	return result;
}
int numSum(string s){
	int sum = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9')
			sum+=s[i]-'0';
	}
	return sum;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	while(N--){
		string s;
		cin >> s;
		v.push_back(s);
	}
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			string tmp = v[i];
			if(v[i].length() > v[j].length()){
				v[i] = v[j];
				v[j] = tmp;
			} else if(v[i].length() < v[j].length()){
				continue;
			} else{
				if(numSum(v[i]) > numSum(v[j])){
					v[i] = v[j];
					v[j] = tmp;
				} else if(numSum(v[i]) == numSum(v[j])){
					if(!isFirst(v[i],v[j])){
						v[i] = v[j];
						v[j] = tmp;
					}
				}
			}
		}
	}
	for(auto a = v.begin(); a!=v.end(); a++)
		cout << *a << '\n';
}
