#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct waiter{
    int prior;
    int location;
};
queue<waiter>q;
queue<int>p;
int solution(vector<int> priorities, int location) {
    int answer = 0;
    for(int i=0;i<priorities.size();i++)
        q.push({priorities[i], i});
    sort(priorities.begin(), priorities.end());
    for(int i=priorities.size()-1;i>-1;i--)
        p.push(priorities[i]);
    while(!q.empty()){
        int pri = q.front().prior;
        int loca = q.front().location;
        q.pop();
        if(pri == p.front()){
            answer++;
            p.pop();
            if(loca == location)
                break;
            continue;
        } else {
            q.push({pri, loca});
        }
    }
    return answer;
}
