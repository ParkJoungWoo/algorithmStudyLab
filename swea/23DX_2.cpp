#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <deque>
using namespace std;
void fullMax(int maxi, int length){
	for(int i=0;i<length;i++)
		cout << maxi;
}
void miniMax(int mini, int maxi, int length){
	cout << mini;
	for(int i=0;i<length-1;i++)
		cout << maxi;
}
void NMax(int mini, int maxi, int length){
	for(int i=0;i<length-1;i++)
		cout << maxi;	
	cout << mini;
}
void dqMax(deque<int>dq){
	while(!dq.empty()){
		cout << dq.front();
		dq.pop_front();
	}
}
void smallLength(int N, int mini, int maxi){
	int maximum;
	int minimum;
	if(mini){
		maximum = maxi*10+mini;
		minimum = mini*10+maxi;
	} else {
		minimum = maximum = maxi*10+mini;
	}
	if(N>=maximum){
		cout << maximum;
	} else if(N>=minimum){
		cout << minimum;
	} else {
		cout << -1;
	}
}
void zeroController(string s,int maxi){
	int start = s[0]-'0';
	int flag[10] ={0,};
	deque<int>dq;
	if(start > maxi){
		NMax(0, maxi, s.length());
	} else if(start == maxi){
		for(int i=0;i<s.length();i++){
			int tmp = s[i]-'0';
			if(tmp==maxi || tmp == 0){
				dq.push_back(tmp);
				flag[tmp]=1;
			} else if(tmp > maxi){
				if(flag[0]){
					dqMax(dq);
					fullMax(maxi, s.length()-i);
					return;
				} else{
					dqMax(dq);
					NMax(0, maxi, s.length()-i);
					return;
				}
			} else if(tmp > 0){
				dqMax(dq);
				miniMax(0, maxi, s.length()-i);
				return;
			}
		}
		if(flag[0]==0){
			dq.pop_back();
			dq.push_back(0);
		} else if(flag[maxi]==0){
			NMax(0, maxi, s.length()-1);
			return;
		}
		dqMax(dq);
	} else{
		NMax(0, maxi, s.length()-1);
	}
}
void show(string s, int mini, int maxi){
	if(s.length() <= 2){
		int N = (s[0]-'0')*10+s[1]-'0'; 
		smallLength(N,mini,maxi);
		return;
	} else if(mini==0){
		zeroController(s,maxi);
		return;
	}
	int start = s[0]-'0';
	int flag[10] ={0,};
	if(start == maxi){
		deque<int>dq;
		for(int i=0;i<s.length();i++){
			int tmp = s[i]-'0';
			if(tmp==maxi || tmp == mini){
				dq.push_back(tmp);
				flag[tmp]=1;
			} else if(tmp > maxi){
				dqMax(dq);
				/*-----------------------------*/
				NMax(mini, maxi, s.length()-i);
				return;
			} else if(tmp > mini){
				dqMax(dq);
				/*-----------------------------*/
				miniMax(mini, maxi, s.length()-i);
				return;
			} else {
				/*-----------------------------*/
				miniMax(mini, maxi, s.length());
				return;
			}
		}
		if(flag[mini]==0){
			dq.pop_back();
			dq.push_back(mini);
		} else if(flag[maxi]==0){
			NMax(mini, maxi, s.length()-1);
			return;
		}
		dqMax(dq);
	} else if(start == mini){
		deque<int>dq;
		for(int i=0;i<s.length();i++){
			int tmp = s[i]-'0';
			if(tmp==maxi || tmp == mini){
				dq.push_back(tmp);
				flag[tmp]=1;
			} else if(tmp > maxi){
				dqMax(dq);
				fullMax(maxi, s.length()-i);
				return;
			} else if(tmp > mini){
				
				/*-----------------------------*/
				if(s.length()-i > 1){
					dqMax(dq);
					miniMax(mini, maxi, s.length()-i);
				}
				else if(flag[maxi]==0)
					NMax(mini, maxi, s.length()-1);
				else
					cout << mini;					
				return;
			} else {
				NMax(mini, maxi, s.length()-1);
				return;
			}
		}
		if(flag[mini]==0){
			dq.pop_back();
			dq.push_back(mini);
		} else if(flag[maxi]==0){
			NMax(mini, maxi, s.length()-1);
			return;
		}
		dqMax(dq);
	} else if(start > maxi){
		NMax(mini, maxi, s.length());
	} else if(start > mini){
		miniMax(mini, maxi, s.length());
	} else {
		NMax(mini, maxi, s.length()-1);
	}
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
		cout << '\n';
	}
	return 0;
}
