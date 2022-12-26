#include <string>
#include <iostream>
#include <stack>
using namespace std;
stack<char>st;
bool solution(string s)
{
    for(int i=0;i<s.length();i++){
        if(st.empty())
            st.push(s[i]);
        else if(st.top() == '(' && s[i] == ')')
            st.pop();
        else
            st.push(s[i]);
    }
    return st.empty();
}
