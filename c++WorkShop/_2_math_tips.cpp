#include <iostream>
#include <string>
#include <sstream> 
#include <algorithm>
using namespace std;
int main(){
	cout << "반올림하기" << '\n';
	cout << "문제상황 : \n 100day를 n day로 나눈 결과를 반올림 해서 나타내기\n"; 
	cout << "100 / n vs 100 / n + 1 vs 99 / n + 1\n";
	cout << "0~100사이의 수를 입력하세요 : ";
	int roundTest;
	cin >> roundTest; 
	cout << 100 / roundTest << " " << 100 / (roundTest) + 1 << " " << 99 / roundTest + 1 << '\n';
	cout << "------------" << '\n';
	return 0;
}
