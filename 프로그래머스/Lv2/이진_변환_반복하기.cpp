#include <string>
#include <vector>
#include <iostream>
using namespace std;
int bi_to_long(string s){
    int ans = 0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='1')
            ans++;
    return ans;
}
string no_to_str(int size){
    string s = "";
    while(size){
        if(size % 2)
            s += "1";
        else
            s += "0";
        size /= 2;
    }
    return s;
}
vector<int> solution(string s) {
    vector<int> answer(2);
    while(s.length()!=1){
        answer[0]++;
        answer[1] += s.length() - bi_to_long(s);
        s = no_to_str(bi_to_long(s));
    }
    return answer;
}
