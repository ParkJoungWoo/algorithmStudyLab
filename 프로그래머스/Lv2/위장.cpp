#include <string>
#include <vector>

using namespace std;
struct types{
    string type;
    int count;
};
int solution(vector<vector<string>> clothes) {
    int answer = 1;
    vector<types>v;
    for(auto it = clothes.begin(); it != clothes.end(); it++){
        if(v.size()==0){
            v.push_back({(*it)[1], 1});
        } else {
            int offset = 1;
            for(auto i = v.begin(); i!=v.end(); i++){
                if((*i).type == (*it)[1]){
                    (*i).count++;
                    offset = 0;
                    break;
                }
            }
            if(offset){
                v.push_back({(*it)[1], 1});
            }
        }
    }
    for(auto it = v.begin(); it != v.end(); it++){
        answer *= (*it).count+1;
    }
    return answer-1;
}
