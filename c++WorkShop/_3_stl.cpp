#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	cout << "���� ���� ���� �����غ���" << '\n';
	vector<int>v_singleUp(5);
	v_singleUp.back()++;
	for(auto it = v_singleUp.begin(); it != v_singleUp.end(); it++)
		cout << *it << " ";
	cout << '\n';
	return 0;
}
