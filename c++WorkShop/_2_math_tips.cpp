#include <iostream>
#include <string>
#include <sstream> 
#include <algorithm>
using namespace std;
int main(){
	cout << "�ݿø��ϱ�" << '\n';
	cout << "������Ȳ : \n 100day�� n day�� ���� ����� �ݿø� �ؼ� ��Ÿ����\n"; 
	cout << "100 / n vs 100 / n + 1 vs 99 / n + 1\n";
	cout << "0~100������ ���� �Է��ϼ��� : ";
	int roundTest;
	cin >> roundTest; 
	cout << 100 / roundTest << " " << 100 / (roundTest) + 1 << " " << 99 / roundTest + 1 << '\n';
	cout << "------------" << '\n';
	return 0;
}
