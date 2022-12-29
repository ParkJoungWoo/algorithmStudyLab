#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2);
    unordered_set<string>s;
    s.insert(words[0]);
    for(int i=0;i+1<words.size();i++){
       if(words[i][words[i].length()-1] != words[i+1][0]){
            answer[0] = (i+1)%n+1;
            answer[1] = (i+1)/n+1;
            break;
        } else if(s.count(words[i+1])){
            answer[0] = (i+1)%n+1;
            answer[1] = (i+1)/n+1;
            break;
        } else
            s.insert(words[i+1]);
    }
    return answer;
}
