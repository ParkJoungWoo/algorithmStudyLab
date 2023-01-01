#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

stack<int>s;
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    for(int i=speeds.size()-1;i>-1;i--){
        int time = ((100-progresses[i])%speeds[i]) ? (100-progresses[i])/speeds[i]+1 : (100-progresses[i])/speeds[i];
     	s.push(time);
    }
    while(!s.empty()){
        int now = s.top();
        int adder = 0;
        while(!s.empty() && now >= s.top()){
            adder++;
            s.pop();
        }
        if(adder)
            answer.push_back(adder);
    }
    return answer;
}
