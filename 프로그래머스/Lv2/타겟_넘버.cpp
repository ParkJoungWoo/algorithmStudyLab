#include <string>
#include <vector>
#include <queue>
using namespace std;
struct pos{
    int now;
    int order;
};
queue<pos>q;
int solution(vector<int> numbers, int target) {
    int answer = 0;
    q.push({0,0});
    while(!q.empty()){
        int now = q.front().now;
        int order = q.front().order;
        q.pop();
        if(now == target && order >= numbers.size()){
            answer++;
            continue;
        }
        if(order >= numbers.size())
            continue;
        for(int i=0;i<2;i++){
            numbers[order] *= -1;
            q.push({now+numbers[order], order+1});
        }
    }
    return answer;
}
