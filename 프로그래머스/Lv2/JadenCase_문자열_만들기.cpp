#include <string>
#include <vector>
using namespace std;
string solution(string s) {
    for(int i=0;i<s.length();i++){
        if(s[i] == ' ')
            continue;
        if('a' <= s[i] && s[i] <= 'z')
            s[i] = 'A' + s[i] - 'a';
        for(int j=i+1;j<s.length();j++,i++){
            if(s[j] == ' ')
                break;
            if('A' <= s[j] && s[j] <= 'Z')
                s[j] = 'a' + s[j] - 'A';
        }
    }
    return s;
}
