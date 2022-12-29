#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
bool isRight(stack<char>st, queue<char> q){
    for(int i=0;i<q.size();i++){
        char tmp = q.front();
        q.pop();
        if(st.empty())
            st.push(tmp);
        else {
            if(st.top() == '(' && tmp == ')')
                st.pop();
            else if(st.top() == '{' && tmp == '}')
                st.pop();
            else if(st.top() == '[' && tmp == ']')
                st.pop();
            else
                st.push(tmp);
        }
        q.push(tmp);        
    }
    return st.empty();
}
int solution(string s) {
    int answer = 0;
    queue<char>q;
    for(int i=0;i<s.length();i++)
        q.push(s[i]);
    for(int i=0;i<s.length();i++){
        if(isRight(stack<char>(), q))
            answer++;
        char tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    return answer;
}
