#include <string>
#include <vector>
#include <sstream>
using namespace std;
string solution(string s) {
    vector<int>ans(2);
    ans[0] = 100000000000;
    ans[1] = -100000000000;
    string temp;
    stringstream ss(s);
    while(ss >> temp){
        if(stoi(temp) < ans[0])
            ans[0] = stoi(temp);
        if(stoi(temp) > ans[1])
            ans[1] = stoi(temp);
    }
    return to_string(ans[0]) + " " + to_string(ans[1]);
}
