#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    if(citations.size()==1)
        return 0;
    for(int i=citations.size()-1; i>=0; i--){
        if(citations[i] >= citations.size()-i){
            answer = (citations.size()-i > answer) ? citations.size()-i : answer;
        }
    }
    return answer;
}
