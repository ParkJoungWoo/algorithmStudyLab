#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int N;
void space(int n){
	while(n--)
		cout << "____";
}
void speak(int n){
	space(n);
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << '\n';
	space(n);
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << '\n';
	space(n);
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << '\n';
}
void what(int n){
	space(n);
	cout << "\"����Լ��� ������?\"" << '\n';
	if(n==N){
		space(n);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" <<'\n'; 
	} else{
		speak(n);
		what(n+1);
	}
	space(n);
	cout << "��� �亯�Ͽ���." << '\n'; 
	
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." <<'\n'; 
	what(0);
	return 0;
}
