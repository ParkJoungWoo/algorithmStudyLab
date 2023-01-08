#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
struct t_set{
    int num;
    int count;
};
bool cmp(t_set a, t_set b){
    return a.count < b.count;
}
int solution(int k, vector<int> tangerine) {
    sort(tangerine.begin(), tangerine.end());
    int answer = 0;
    int check = tangerine[0];
    int count = 0;
    vector<t_set>v;
    for(int i=0;i<tangerine.size();i++){
        if(check == tangerine[i]){
            count++;
        } else {
            v.push_back({check, count});
            check = tangerine[i];
            count=1;
        }
    }
    if(v.size()>0){
        if(v[v.size()-1].num != check)
            v.push_back({check, count});
    } else {        
        v.push_back({check, count});
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=v.size()-1; i>=0; i--){
        k-=v[i].count;
        answer++;
        if(k<=0){
            break;
        }
    }
    return answer;
}
