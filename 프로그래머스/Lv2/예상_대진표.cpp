#include <iostream>

using namespace std;

int solution(int n, int a, int b){
    int answer = 1;
    int first = (a < b) ? a : b;
    int second = (a < b) ? b : a;
    while(second-first > 1 || second % 2){
        answer++;
        if(first % 2)
            first = (first+1)/2;
        else
            first /= 2;
        if(second % 2)
            second = (second+1)/2;
        else
            second /= 2;
    }
    return answer;
}
