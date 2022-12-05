#include <iostream>
#include <string>
#include <sstream> 
#include <algorithm>
using namespace std;
int main(){
	// cin, cout practice
	// cout���� ������ �Ҷ� escape sequence�� �������!
	// endl�� ����ð��� ��� �Դ´�. 
	int number = 0;
	cout << "�����Է� : ";
	cin >> number;
	cout << number << '\n';
	cout << "------------" << '\n';
	
	// string practice
	// ���ڿ� �ʱ�ȭ 
	cout << "�����Է� : ";
	string str = "init";
	cin >> str;
	// for - each ���� 
	for(char a : str)
		cout << a << '\n';
	// integer�� ���� ����
	// ���ڿ��� ���̴� str.length() 
	for(int i = 0; i < str.length(); i++)
		cout << str[i] << '\n';
	// ���ڿ��� ���ڷ� ���� 
	if(123 == stoi(str)) 
		cout << "this is equal number" << '\n';
	else
		cout << "this is not equal number" << '\n';
	cout << "------------" << '\n';
	cout << "���ڿ� �Է� : ";
	cin >> str;
	if("123" == str) 
		cout << "this is equal string" << '\n';
	else
		cout << "this is not equal string" << '\n';
	cout << ("a" < str) << '\n';
	cout << ("zzz" < str) << '\n';
	cout << "------------" << '\n';
	
	// ���ڿ��� ��ġ�� 
	str += "<this is added String>";
	cout << "Start :" << '\n';
	cout << str.front() << '\n';
	
	cout << "End :" << '\n';
	cout << str.back() << '\n';
	
	cout << str << '\n';
	
	// ã���� �ϴ� ���ڿ��� ���� ��ġ ��ȯ 
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
	
	// ���ڿ��� �Ϻκ� �����ϱ�
	// startIndex -> ������
	cout << "original : " << '\n';
	cout << str << '\n';
	
	cout << "substr : substr(3) " << '\n';
	cout << str.substr(3) << '\n';
	
	// startIndex -> ���� ���� ��ŭ 
	cout << "original : " << '\n';
	cout << str << '\n';
	
	cout << "substr : substr(3,5)" << '\n';
	cout << str.substr(3,5) << '\n';
	
	cout << "------------" << '\n';
	
	cout << "������ ���ڿ� �Է� : ";
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
	cout << "������ ���Ե� ���ڿ� " + str << '\n';
	stringstream ss(str);
	while(ss >> temp)
		cout << "���� ���ڿ� : " << temp << '\n';
	cout << "------------" << '\n';
	
	int temp2; 
	str = "11 22 33 44 55";
	cout << "������ ���Ե� ���ڿ� " + str << '\n';
	stringstream ss2(str);
	while(ss2 >> temp2)
		cout << "���� ���� + 100 : " << temp2+100 << '\n';
	cout << "------------" << '\n';
	
	int bigNum = 2100000000;
	cout << "���ڸ� ���ڿ���" << '\n';
	cout << bigNum << " " << to_string(bigNum) << '\n';
	cout << "------------" << '\n';
	
	cout << "���ڿ� �����ϱ�" << '\n';
	string re_placer = "a,b,c,d,e";
	cout << re_placer << endl;
	replace(re_placer.begin(), re_placer.end(), ',', ' ');
	cout << re_placer << endl;
	cout << "------------" << '\n';
	
	cout << "������ ���Ե� ���ڿ� �Է�" << '\n';
	string blanker;
	getline(cin, blanker);
	cout << blanker << endl;
	cout << "------------" << '\n';
	return 0;
}
/*
for(char a : string) -> for - each ����

str.length() -> ���ڿ� ����(null���� ����)
stoi(str) -> ���ڿ��� integer�� �ٲٱ�
stod double
stof float
stol long

"aa" < "bb" -> 1(true) ���ڿ� �񱳴� ������ 
	
"aa" + "bb" = "aabb" ���ڿ� ����	

str.find("� ���ڿ�") ã���� �ϴ� ���ڿ��� ���� �ε����� ����.

str.substr(n) : n ���� ��
str.substr(n, k) : n ���� k �� 
���ڿ��� �Ϻκ� ��ȯ. 

str.front()
str.back()

str.replace(first_index, second_index, changeString)
first_index ~ second_index�� ���ڿ���
changeString���� ����(���� ���̴� ��� X)
 
 
 stringstream���� ���ڿ��� ����������� ���� �� �ִ�. 
 -> ���ڿ��� �Ľ��ϸ� ���ڿ�, int, char�� �ٸ� �ڷ������� ������ �� ���Ŀ� �°� ������. 
 
 ���ڸ� ���ڿ��� �����ϱ� to_string 
 
 ������ ���Ե� ���ڿ� �Է¹ޱ�
 getline(cin, str); 
*/
