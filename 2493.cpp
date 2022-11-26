#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(void){
	int N, m;
	vector<int>list;
	vector<int>answer;
	stack<int> max_stack;
	stack<int> index_stack;
	cin >> N;
	while(N--){
		cin >> m;
		list.push_back(m);
	}
	for(int i = 0; i < list.size(); i++){
		if(max_stack.empty()){
			max_stack.push(list[i]);
			index_stack.push(i+1);
			answer.push_back(0);
		} else if(list[i] < max_stack.top()){
			answer.push_back(index_stack.top());
			max_stack.push(list[i]);
			index_stack.push(i+1);
		} else if(list[i] > max_stack.top()){
			while(!max_stack.empty()){
				if(max_stack.top() < list[i]){
					max_stack.pop();
					index_stack.pop();
				}
				else
					break;
			}
			i--;
		}
	}
	for(auto i : answer)
		cout << i << " ";
	return 0;
}
