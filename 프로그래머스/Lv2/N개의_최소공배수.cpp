#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b){
    int aa = (a > b) ? a : b;
    int bb = (a > b) ? b : a;
    while(bb){
        int tmp = bb;
        bb = aa % bb;
        aa = tmp;
    }
    return aa;
}
int solution(vector<int> arr) {
    int answer = arr[0];
    for(int i=1;i<arr.size();i++){
        answer = answer * arr[i] / gcd(answer, arr[i]);
    }
    return answer;
}
