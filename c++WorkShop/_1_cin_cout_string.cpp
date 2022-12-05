#include <iostream>
#include <string>
#include <sstream> 
#include <algorithm>
using namespace std;
int main(){
	// cin, cout practice
	// cout에서 개행을 할때 escape sequence를 사용하자!
	// endl는 실행시간을 잡아 먹는다. 
	int number = 0;
	cout << "숫자입력 : ";
	cin >> number;
	cout << number << '\n';
	cout << "------------" << '\n';
	
	// string practice
	// 문자열 초기화 
	cout << "숫자입력 : ";
	string str = "init";
	cin >> str;
	// for - each 구문 
	for(char a : str)
		cout << a << '\n';
	// integer를 통한 접근
	// 문자열의 길이는 str.length() 
	for(int i = 0; i < str.length(); i++)
		cout << str[i] << '\n';
	// 문자열을 숫자로 변경 
	if(123 == stoi(str)) 
		cout << "this is equal number" << '\n';
	else
		cout << "this is not equal number" << '\n';
	cout << "------------" << '\n';
	cout << "문자열 입력 : ";
	cin >> str;
	if("123" == str) 
		cout << "this is equal string" << '\n';
	else
		cout << "this is not equal string" << '\n';
	cout << ("a" < str) << '\n';
	cout << ("zzz" < str) << '\n';
	cout << "------------" << '\n';
	
	// 문자열을 합치기 
	str += "<this is added String>";
	cout << "Start :" << '\n';
	cout << str.front() << '\n';
	
	cout << "End :" << '\n';
	cout << str.back() << '\n';
	
	cout << str << '\n';
	
	// 찾고자 하는 문자열의 시작 위치 반환 
	string want = "this";
	for(int i = 0; i <= str.find(want); i++)
		for(int j = 0; j <= str.find(want); j++){
			if(i == j)
				cout << j;
			else if(j == str.find(want)){
				if(i == 0)
					cout << "^\n";
				else
					cout << "|\n";
			}
			else
				cout << " ";
		}
	cout << '\n';
	cout << want+" position index is " << str.find(want) << " order is " << str.find(want)+1 << '\n';
	cout << "------------" << '\n';
	
	// 문자열을 일부분 추출하기
	// startIndex -> 끝까지
	cout << "original : " << '\n';
	cout << str << '\n';
	
	cout << "substr : substr(3) " << '\n';
	cout << str.substr(3) << '\n';
	
	// startIndex -> 일정 길이 만큼 
	cout << "original : " << '\n';
	cout << str << '\n';
	
	cout << "substr : substr(3,5)" << '\n';
	cout << str.substr(3,5) << '\n';
	
	cout << "------------" << '\n';
	
	cout << "수정할 문자열 입력 : ";
	string change;
	cin >> change;
	cout << "original:\n";
	cout << str <<'\n';
	
	str.replace(0, 5, change);
	cout << "changed:\n"; 
	cout << str <<'\n';
	
	cout << "------------" << '\n';
	
	str = "aa bb cc dd ee ff gg";
	string temp;
	cout << "공백이 포함된 문자열 " + str << '\n';
	stringstream ss(str);
	while(ss >> temp)
		cout << "나눈 문자열 : " << temp << '\n';
	cout << "------------" << '\n';
	
	int temp2; 
	str = "11 22 33 44 55";
	cout << "공백이 포함된 문자열 " + str << '\n';
	stringstream ss2(str);
	while(ss2 >> temp2)
		cout << "나눈 정수 + 100 : " << temp2+100 << '\n';
	cout << "------------" << '\n';
	
	int bigNum = 2100000000;
	cout << "숫자를 문자열로" << '\n';
	cout << bigNum << " " << to_string(bigNum) << '\n';
	cout << "------------" << '\n';
	
	cout << "문자열 수정하기" << '\n';
	string re_placer = "a,b,c,d,e";
	cout << re_placer << endl;
	replace(re_placer.begin(), re_placer.end(), ',', ' ');
	cout << re_placer << endl;
	cout << "------------" << '\n';
	
	cout << "공백이 포함된 문자열 입력" << '\n';
	string blanker;
	getline(cin, blanker);
	cout << blanker << endl;
	cout << "------------" << '\n';
	return 0;
}
/*
for(char a : string) -> for - each 구문

str.length() -> 문자열 길이(null문자 제외)
stoi(str) -> 문자열을 integer로 바꾸기
stod double
stof float
stol long

"aa" < "bb" -> 1(true) 문자열 비교는 사전순 
	
"aa" + "bb" = "aabb" 문자열 덧셈	

str.find("어떤 문자열") 찾고자 하는 문자열의 시작 인덱스를 리턴.

str.substr(n) : n 부터 끝
str.substr(n, k) : n 부터 k 개 
문자열의 일부분 반환. 

str.front()
str.back()

str.replace(first_index, second_index, changeString)
first_index ~ second_index의 문자열을
changeString으로 수정(길이 차이는 상관 X)
 
 
 stringstream으로 문자열을 공백기준으로 나눌 수 있다. 
 -> 문자열로 파싱하면 문자열, int, char등 다른 자료형으로 받으면 그 형식에 맞게 나눈다. 
 
 숫자를 문자열로 수정하기 to_string 
 
 공백이 포함된 문자열 입력받기
 getline(cin, str); 
*/
