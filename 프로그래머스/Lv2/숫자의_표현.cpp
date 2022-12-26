#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for(int i=1;i<n;i++){
        for(int j=i+1;;j++){
            if((i+j)*(j-i+1) == 2*n){
                answer++;
                break;
            } else if((i+j)*(j-i+1) > 2*n)
                break;
        }
    }
    return answer;
}
